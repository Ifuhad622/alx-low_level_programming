#include "main.h"

/**
 * main - func displays info in Elf header at Elf file start
 * @argc: args input number
 * @argv: args pointer vector array
 * Return: 0 (Success), 98 (fail)
 */
int main(int argc, const char *argv[])
{
	unsigned char buff[18];
	unsigned int bit_mode;
	int big_endian;
	int fd;

	if (argc != 2)
	{
		write(STDERR_FILENO, "Usage: elf_header elf_filename\n", 31);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file\n", 28);
		exit(98);
	}

	_read(fd, (char *) buff, 18);

	elf_magic(buff);
	bit_mode = elf_class(buff);
	big_endian = elf_data(buff);
	elf_version(buff);
	elf_osabi(buff);
	elf_abivers(buff);
	elf_type(buff, big_endian);

	lseek(fd, 24, SEEK_SET);
	_read(fd, (char *) buff, bit_mode / 8);

	elf_entry(buff, bit_mode, big_endian);

	_close(fd);

	return (0);
}

/**
 * elf_entry - func prints entry point address
 * @buff: input string containing entry point address
 * @bit_mode: input bit mode (32 or 64)
 * @big_endian: endianness (big endian if non-zero)
 * Return: void
 */
void elf_entry(const unsigned char *buff, size_t bit_mode, int big_endian)
{
	int address_size = bit_mode / 8;

	printf("  %-34s 0x", "Entry point address:");

	if (big_endian)
	{
		while (address_size && !*(buff))
			--address_size, ++buff;

		printf("%x", *buff & 0xff);

		while (--address_size > 0)
			printf("%02x", *(++buff) & 0xff);
	}
	else
	{
		buff += address_size;

		while (address_size && !*(--buff))
			--address_size;

		printf("%x", *buff & 0xff);

		while (--address_size > 0)
			printf("%02x", *(--buff) & 0xff);
	}

	printf("\n");
}

/**
 * elf_type - func print Elf type
 * @buff: Elf header
 * @big_endian: endianness (big endian if non-zero)
 * Return: void
 */
void elf_type(const unsigned char *buff, int big_endian)
{
	char *type_table[5] = {
		"NONE (No file type)",
		"REL (Relocatable file)",
		"EXEC (Executable file)",
		"DYN (Shared object file)",
		"CORE (Core file)"
	};
	unsigned int type;

	printf("  %-34s ", "Type:");

	if (big_endian)
		type = 0x100 * buff[16] + buff[17];
	else
		type = 0x100 * buff[17] + buff[16];

	if (type < 5)
		printf("%s\n", type_table[type]);
	else if (type >= ET_LOOS && type <= ET_HIOS)
		printf("OS Specific: (%4x)\n", type);
	else if (type >= ET_LOPROC && type <= ET_HIPROC)
		printf("Processor Specific: (%4x)\n", type);
	else
		printf("<unknown: %x>\n", type);
}

/**
 * elf_abivers - func prints Elf ABI version
 * @buff: the Elf header
 * Return: void
 */
void elf_abivers(const unsigned char *buff)
{
	printf("  %-34s %u\n", "ABI Version:", buff[EI_ABIVERSION]);
}

/**
 * elf_version - func prints Elf version
 * @buff: Elf header
 * Return: void
 */
void elf_version(const unsigned char *buff)
{
	printf("  %-34s %u", "Version:", buff[EI_VERSION]);

	if (buff[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}

/**
 * elf_osabi - func print Elf OS/ABI
 * @buff: the Elf header
 * Return: void
 */
void elf_osabi(const unsigned char *buff)
{
	const char *os_table[19] = {
		"UNIX - System V",
		"UNIX - HP-UX",
		"UNIX - NetBSD",
		"UNIX - GNU",
		"<unknown: 4>",
		"<unknown: 5>",
		"UNIX - Solaris",
		"UNIX - AIX",
		"UNIX - IRIX",
		"UNIX - FreeBSD",
		"UNIX - Tru64",
		"Novell - Modesto",
		"UNIX - OpenBSD",
		"VMS - OpenVMS",
		"HP - Non-Stop Kernel",
		"AROS",
		"FenixOS",
		"Nuxi CloudABI",
		"Stratus Technologies OpenVOS"
	};

	printf("  %-34s ", "OS/ABI:");

	if (buff[EI_OSABI] < 19)
		printf("%s\n", os_table[(unsigned int) buff[EI_OSABI]]);
	else
		printf("<unknown: %x>\n", buff[EI_OSABI]);
}

/**
 * elf_data - func prints Elf data
 * @buff: the Elf header
 * Return: 1 if big endian, otherwise 0
 */
int elf_data(const unsigned char *buff)
{
	printf("  %-34s ", "Data:");

	if (buff[EI_DATA] == ELFDATA2MSB)
	{
		printf("2's complement, big endian\n");
		return (1);
	}
	if (buff[EI_DATA] == ELFDATA2LSB)
	{
		printf("2's complement, little endian\n");
		return (0);
	}
	printf("Invalid data encoding\n");
	return (0);
}

/**
 * _strncmp - func compares s1 and s2
 * @s1: first input string
 * @s2: second input string
 * @n: max number of bytes compared
 * Return: first n bytes of s1 and s2 are equal (0), otherwise non-zero
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	for ( ; n && *s1 && *s2; --n, ++s1, ++s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
	}
	if (n)
	{
		if (*s1)
			return (1);
		if (*s2)
			return (-1);
	}
	return (0);
}

/**
 * _close - func closes file descriptor, prints error message upon failure
 * @fd: file descriptor to close
 * Return: void
 */
void _close(int fd)
{
	if (close(fd) != -1)
		return;
	write(STDERR_FILENO, "Error: Can't close fd\n", 22);
	exit(98);
}

/**
 * _read - func reads from file and prints error message upon failure
 * @fd: file descriptor to read from
 * @buff: buffer to write to
 * @count: number of bytes to read
 * Return: void
 */
void _read(int fd, char *buff, size_t count)
{
	if (read(fd, buff, count) != -1)
		return;
	write(STDERR_FILENO, "Error: Can't read from file\n", 28);
	_close(fd);
	exit(98);
}

/**
 * elf_magic - print Elf magic
 * @buff: the Elf header
 */
void elf_magic(const unsigned char *buff)
{
	unsigned int i;

	if (_strncmp((const char *) buff, ELFMAG, 4))
	{
		write(STDERR_FILENO, "Error: Not an ELF file\n", 23);
		exit(98);
	}

	printf("ELF Header:\n  Magic:   ");

	for (i = 0; i < 16; ++i)
		printf("%02x%c", buff[i], i < 15 ? ' ' : '\n');
}

/**
 * elf_class - print Elf class
 * @buff: the Elf header
 * Return: bit mode (32 or 64)
 */
size_t elf_class(const unsigned char *buff)
{
	printf("  %-34s ", "Class:");

	if (buff[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
		return (64);
	}
	if (buff[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
		return (32);
	}
	printf("<unknown: %x>\n", buff[EI_CLASS]);
	return (32);
}

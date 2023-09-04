#include "main.h"

/**
 * read_textfile - func reads text file and prints chars to stdout
 * @filename: filename to read
 * @letters: chars to read
 * Return: The actual number of letters it could read and print
 *	or 0 if failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t bytes_rd, bytes_wr;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters + 1);
	if (buff == NULL)
		return (0);

	bytes_rd = read(fd, buff, letters);
	if (bytes_rd == -1)
		return (0);

	buff[letters + 1] = '\0';
	close(fd);

	bytes_wr = write(STDOUT_FILENO, buff, bytes_rd);
	if (bytes_wr == -1)
		return (0);

	free(buff);

	return (bytes_rd);
}

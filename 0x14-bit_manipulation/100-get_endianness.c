#include "main.h"

/**
 * get_endianness - func verifies endianness
 * Return: big endian (0), little endian (1)
 */
int get_endianness(void)
{
	int a = 1;
	char *endian = (char *)&a;

	if (*endian == 1)
	{
		return (1);
	}

	return (0);
}

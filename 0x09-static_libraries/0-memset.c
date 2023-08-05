#include "main.h"

/**
 * _memset - fill block of memory with constant value
 * @s: memory address to be filled
 * @b: constant value
 * @n: number of bytes filled
 * Return: pointer to filled memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;

	}

	return (s);
}

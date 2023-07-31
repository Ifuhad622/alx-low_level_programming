#include "main.h"

/**
 * _memcpy - function copies memory
 * @dest: destination memory
 * @src: source memory
 * @n: bytes used
 * Return: dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}

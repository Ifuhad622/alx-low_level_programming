#include "main.h"
#include <stdlib.h>

/**
 * _memset - fill block of s with constant value
 * @s: memory address to be filled
 * @b: char to be copied
 * @n: number of b copies
 * Return: pointer to filled memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _calloc - allocates memory for nmemb
 * @nmemb: number of elements in array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(size * nmemb);

	if (p == NULL)
	{
		return (NULL);
	}

	_memset(p, 0, nmemb * size);

	return (p);
}

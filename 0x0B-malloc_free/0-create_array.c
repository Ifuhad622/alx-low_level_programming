#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of assigned c
 * @size: size of c array
 * @c: assigned c stored in memory
 * Return: pointer to c array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(sizeof(c) * size);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}

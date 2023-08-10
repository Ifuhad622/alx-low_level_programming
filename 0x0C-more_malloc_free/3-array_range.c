#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array of int to memory
 * @min: minimum input
 * @max: maximum input
 * Return: pointer to array in allocated memory,
 * NULL (if man > mix), NULL (if malloc fails)
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++, min++)
	{
		ar[i] = min;
	}

	return (ar);
}

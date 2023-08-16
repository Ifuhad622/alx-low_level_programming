#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - check index place
 * @array: integer array input
 * @size: number of integers, size of array
 * @cmp: function pointer for value comparison
 * Desciption: return index place if cmp is true, -1 if false
 * Return: index of elem (true), -1 (false)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

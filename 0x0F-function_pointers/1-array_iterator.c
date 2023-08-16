#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - call print function for each array element,
 * printed on new line
 * @array: input array of integers
 * @size: array size
 * @action: regular or hex int pointer print function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}

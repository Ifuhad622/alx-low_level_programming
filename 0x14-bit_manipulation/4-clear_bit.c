#include "main.h"

/**
 * clear_bit - func set bit index value to 0
 * @n: input int pointer
 * @index: index to set
 * Return: index set (1), error (-1)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index >= (sizeof(*n) * 8))
	{
		return (-1);
	}
	m = 1;
	m = m << index;
	m = ~m;
	*n = *n & m;

	return (1);
}

#include "main.h"

/**
 * set_bit - func sets specific index bit n to 1
 * @n: input int pointer
 * @index: index to set
 * Return: index set (1), error (-1)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index >= (sizeof(*n) * 8))
	{
		return (-1);
	}
	m = 1;
	*n = *n | (m << index);

	return (1);
}

#include "main.h"

/**
 * get_bit - func prints index bit val of n
 * @n: input value
 * @index: bit index
 * Return: index bit value (SUccess), error (-1)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;

	if (n == 0 && index < 64)
	{
		return (0);
	}

	for (a = 0; a <= 63; n >>= 1, a++)
	{
		if (index == a)
			return (n & 1);
	}

	return (-1);
}

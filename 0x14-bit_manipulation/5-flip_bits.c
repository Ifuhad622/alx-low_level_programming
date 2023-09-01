#include "main.h"

/**
 * flip_bits - func prints - func prints bits to flip int inputs
 * @n: first input int
 * @m: second input int
 * Return: flipped number of bits (Success)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned int sum_bt;

	sum_bt = 0;
	xor = n ^ m;

	while (xor)
	{
		sum_bt += xor & 1;
		xor = xor >> 1;
	}
	return (sum_bt);
}

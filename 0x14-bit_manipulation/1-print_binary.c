#include "main.h"

/**
 * print_binary - func prints binary representation of n
 * @n: number to be printed in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int _bin, a;
	unsigned long int b;

	_bin = 0;

	for (a = 63; a >= 0; a--)
	{
		b = (n >> a) & 1;

		if (b == 1)
		{
			_bin = 1;
		}
		if (_bin == 1)
		{
			_putchar(((n >> a) & 1) + '0');
		}
	}
	if (n == 0)
	{
		_putchar('0');
	}
}

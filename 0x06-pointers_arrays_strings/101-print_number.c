#include "main.h"
#include <stdio.h>

/**
 * print_number - print an int numbers
 * @n: number tested
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
	int power = 1, neg = 0;
	int hold = n;

	if (n < 0)
	{
		neg = 1;
		_putchar('-');
	}

	for (; hold > 9 || hold < -9; power *= 10, hold /= 10)
		;

	for (; power > 0; power /= 10)
	{
		if (neg)
			_putchar((n / power % 10) * -1 + '0');
		else
			_putchar(n / power % 10 + '0');
	}
}

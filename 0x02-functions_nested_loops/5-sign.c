#include "main.h"

/**
 * print_sign - check for sign of number
 * @n: number to be checked
 * Return: 1 and print + if n is greater than 0
 * 0 print 0 if n is equal to 0
 * -1 and print -1 if n is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}

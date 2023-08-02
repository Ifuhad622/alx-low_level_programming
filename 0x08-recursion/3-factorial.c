#include "main.h"

/**
 * factorial - print factorial of n
 * @n: input n
 * Return: factorial of n (Success)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}

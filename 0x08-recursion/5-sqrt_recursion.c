#include "main.h"

/**
 * _sqrt_recursion - print natural square root of n
 * @n: input n to calculate square root of
 * Return: natural square root of n (Success)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - function recursion for natural
 * square root of n
 * @n: input n to calculate square root of
 * @i: input iterator
 * Return: square root of n
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (actual_sqrt_recursion(n, i + 1));
}

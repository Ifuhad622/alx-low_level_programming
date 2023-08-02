#include "main.h"

int actual_prime(int n, int a);

/**
 * is_prime_number - check if n is prime number
 * @n: input n to check
 * Return: 1 (n is prime number), 0 (n is not prime number)
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - check if n is recursive prime number
 * @n: input n to check
 * @a: input iterator
 * Return: 1 (n is prime number), 0 (n is not prime number)
 */
int actual_prime(int n, int a)
{
	if (a == 1)
	{
		return (1);
	}
	if (n % a == 0 && a > 0)
	{
		return (0);
	}
	return (actual_prime(n, a - 1));
}

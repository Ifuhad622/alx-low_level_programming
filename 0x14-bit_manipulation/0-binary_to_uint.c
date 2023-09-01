#include "main.h"

/**
 * binary_to_uint - func prints converted unsigned int of b
 * @b: binary input string pointer
 * Return: converted num (Success), 1 or more chars (NULL)
 */
unsigned int binary_to_uint(const char *b)
{
	int length, i;
	unsigned int sum_bin;

	sum_bin = 0;
	if (b == NULL)
	{
		return (sum_bin);
	}
	length = _strlen(b);
	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		sum_bin += (b[i] - '0') * power(2, length - i - 1);
	}
	return (sum_bin);
}

/**
 * _strlen - func prints modified length of s
 * @s: constant input string
 * Return: modified length of s
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * power - func prints base int exp
 * @base: input base
 * @exp: input exponent
 * Return: exponent of int
 */
int power(int base, int exp)
{
	int i, num_exp;

	num_exp = 1;
	for (i = 0; i < exp; i++)
	{
		num_exp *= base;
	}

	return (num_exp);
}

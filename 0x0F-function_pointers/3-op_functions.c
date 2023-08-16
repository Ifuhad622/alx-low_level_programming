#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum of a and b
 * @a: first int input
 * @b: second int input
 * Return: sum (op_add int)
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sum diff of a and b
 * @a: first int input
 * @b: second int input
 * Return: sum difference (op_sub int)
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - sum prod of a and b
 * @a: first integer
 * @b: second integer
 * Return: sum product (op_mul int)
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - sum quotient of a and b
 * @a: numerator int input
 * @b: denominator int input
 * Return: sum quotient (op_div int)
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder from modulus func
 * @a: numerator int input
 * @b: denominator int input
 * Return: remainder from int modulus (op_mod int)
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

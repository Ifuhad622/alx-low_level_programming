#include "main.h"

/**
 * swap_int - swap values of two intergers
 * @a: first value pointer
 * @b: second value pointer
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

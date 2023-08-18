#include "variadic_functions.h"

/**
 * sum_them_all - return sum of all n params
 * @n: number of args
 * @...: variable n params to calculate
 * Return: 0 (n == 0), otherwise sum of all params
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, int);
	}

	va_end(valist);

	return (sum);
}

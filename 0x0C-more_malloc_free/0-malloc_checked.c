#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate b using malloc
 * @b: allocated memory
 * Return: pointer to b (Success), 98 (Fail)
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}

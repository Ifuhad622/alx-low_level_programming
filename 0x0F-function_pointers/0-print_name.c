#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - print name
 * @name: name of person
 * @f: print function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}

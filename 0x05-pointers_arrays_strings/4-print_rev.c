#include "main.h"
#include <string.h>

/**
 * print_rev - print string in reverse order
 * @s: string
 * Return: Always 0
 */
void print_rev(char *s)
{
	int a = strlen(s) - 1;

	while (a >= 0)
	{
		_putchar(s[a]);
		a--;
	}
	_putchar('\n');
}

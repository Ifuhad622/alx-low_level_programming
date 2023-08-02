#include "main.h"
#include <string.h>

/**
 * is_palindrome - check if s is a palindrome
 * @s: input string
 * Return: Always 0 (Success)
 */
int is_palindrome(char *s)
{
	int a, b;

	a = strlen(s) / 2;
	b = strlen(s);

	if (s[a] == s[b - a - 1])
	{
		return (1);
	}
	return (0);
}

#include "main.h"

/**
 * _strchr - locate character in string
 * @s: input string
 * @c: input character
 * Return: pointer to first occurence of character c (Success)
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return ('\0');
}

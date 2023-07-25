#include "main.h"

/**
 * _strlen - length of string
 * @s: character pointer
 * Return: length of string
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		++a;
	}

	return (a);
}

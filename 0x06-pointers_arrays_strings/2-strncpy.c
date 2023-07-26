#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - copies n characters from source string to destination string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of characters to copy
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

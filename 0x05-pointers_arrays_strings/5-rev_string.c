#include "main.h"
#include <string.h>

/**
 * rev_string - print string in reverse
 * @s: pointer pointing to string
 * Return: reversed string
 */
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int a;

	while (s[counter] != '\0')
		counter++;
	for (a = 0; a < counter; a++)
	{
		counter--;
		rev = s[a];
		s[a] = s[counter];
		s[counter] = rev;
	}
}

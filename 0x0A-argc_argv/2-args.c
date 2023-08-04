#include "main.h"
#include <stdio.h>

/**
 * main - print all received argc
 * @argc: argument number
 * @argv: argument array vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

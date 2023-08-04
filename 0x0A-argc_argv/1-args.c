#include "main.h"
#include <stdio.h>

/**
 * main - print number of argc
 * @argc: argument number
 * @argv: arguments array vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

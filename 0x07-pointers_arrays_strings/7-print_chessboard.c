#include "main.h"

/**
 * print_chessboard - fucntion prints chessboard
 * @a: array pointer
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
		}
		_putchar('\n');
	}
}

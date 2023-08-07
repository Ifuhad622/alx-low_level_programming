#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees 2d array and memory of grid
 * @grid: multi-d grid of integers
 * @height: height of grid
 * Return: void (Success), NULL (error)
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}

#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - frees 2d array and memory of grid
 * @grid: multi-d grid of integers
 * @height: height of grid
 * Return: void (Success), NULL (fails)
 */
void ch_free_grid(char **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
		{
			free(grid[height]);
			free(grid[height]);
		}
		free(grid);
	}
}

/**
 * strtow - splits str into words
 * @str: string to split
 * Return: integer array pointer
 */
char **strtow(char *str)
{
	char **aout;
	int c, height, i, j, b;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	aout = malloc((height + 1) * sizeof(char *));
	if (aout == NULL || height == 0)
	{
		free(aout);
		return (NULL);
	}
	for (i = b = 0; i < height; i++)
	{
		for (c = b; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				b++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				aout[i] = malloc((c - b + 2) * sizeof(char));
				if (aout[i] == NULL)
				{
					ch_free_grid(aout, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; b <= c; b++, j++)
			aout[i][j] = str[b];
		aout[i][j] = '\0';
	}
	aout[i] = NULL;
	return (aout);
}

#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - allocates grid
 * @grid: width
 * @height: height
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

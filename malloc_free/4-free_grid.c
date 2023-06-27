#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - entry point
 *
 * description: frees a 2 dimensional grid
 * @grid: grid we want to free
 * @height: height arg
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int count;

	for (count = 0; count < height; count++)
	{
		free(grid[count]);
	}
	free(grid);
}

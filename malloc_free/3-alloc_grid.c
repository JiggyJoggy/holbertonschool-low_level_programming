#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - entry point
 *
 * description: returns to a pointer to a 2 dim array of ints
 * @width: int value
 * @height: int value
 *
 * Return: NULL if failed, width or height is 0, and neg
 * else return int
 */

int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	int **ptr = malloc((width * height) * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (int index = 0; index < width; index++)
	{
		for (int index_2 = 0; index_2 < height; index_2++)
		{
			ptr[index][index_2];
		}
	}
	return (ptr);
}
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
	int **ptr, index, index_2, index_3;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < height; index++)
	{
		ptr[index] = malloc(width * sizeof(int));

		if (ptr[index] == NULL)
		{
			for (index_3 = 0; index_3 < height; index_3++)
			{
				free(ptr[index_3]);
			}
			free(ptr);
			return (NULL);
		}
		for (index_2 = 0; index_2 < width; index_2++)
		{
			ptr[index][index_2] = 0;
		}
	}
	return (ptr);
}

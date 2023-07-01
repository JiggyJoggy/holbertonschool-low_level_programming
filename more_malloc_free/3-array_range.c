#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - entry point
 *
 * description: function that creates an array of integers
 * @min: least num
 * @max: highest num
 *
 * Return: NULL if min is greater than max or if array fails
 * else return pointer
 */

int *array_range(int min, int max)
{
	int index, size;
	int *array;

	if (min > max)
	{
		return (NULL);
	}

	size = (max - min) + 1;
	array = malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		array[index] = min + index;
	}

	return (array);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - entry point
 *
 * description: function that creates an array of chars
 * and initializes it with a specific char
 *
 * @size: size of unsigned int
 * @c: a specific char
 *
 * Return: NULL if size is 0 or it fails, else return pointer
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}

	return (array);
}

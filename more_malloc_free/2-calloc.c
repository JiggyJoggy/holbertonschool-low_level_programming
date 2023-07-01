#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - entry point
 *
 * description: function that allocates memory for an array using malloc
 * @nmemb: an array of elements
 * @size: size of bytes of each
 *
 * Return: NULL if nmemb or size is 0, or malloc fails, else pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory_ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	memory_ptr = malloc(nmemb * size);

	if (memory_ptr != NULL)
	{
		memset(memory_ptr, 0, nmemb * size);
	}
	return (memory_ptr);
}

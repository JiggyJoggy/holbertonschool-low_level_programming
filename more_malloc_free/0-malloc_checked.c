#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - entry point
 *
 * description: function that allocates memory using malloc
 * @b: elements we want
 *
 * Return: Pointer
 */

void *malloc_checked(unsigned int b)
{
	void *mall = malloc(b);

	if (mall == NULL)
	{
		exit(98);
	}

	return (mall);
}

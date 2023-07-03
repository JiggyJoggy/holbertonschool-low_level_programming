#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - entry point
 *
 * description: frees dog
 * @d: dog
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);
	free(d);
}

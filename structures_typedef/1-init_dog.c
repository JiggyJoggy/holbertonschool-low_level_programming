#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - entry point
 *
 * description: initialize a variable of type struct dog
 * @d: dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return (NULL);
	}

	d.->name = name;
	d.->age = age;
	d.->owner = owner;
}

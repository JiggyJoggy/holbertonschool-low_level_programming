#include <stdio.h>
#include "dog.h"

/**
 * new_dog - entry point
 *
 * description: a function that creates a new dog
 * @name: string of dog
 * @age: float of dog
 * @owner: owner to that dog
 *
 * Return: NULL if function fails, else dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = malloc(sizeof(strlen(name) + 1));

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(strlen(owner) + 1));

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = strdup(name);
	new_dog->owner = strdup(owner);
	new_dog->age = age;

	return (new_dog);
}

#include "dog.h"

/**
 * print_dog - entry point
 *
 * description: prints out the struct of dog
 * @d: dog struct
 *
 * Return: dog struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %2f\n", d->age ? d->age : 0);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}

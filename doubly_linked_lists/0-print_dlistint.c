#include "lists.h"

/**
 * print_dlistint - entry point
 *
 * description: prints all the elements of a list
 * @h: points to the header
 *
 * Return: elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *current = h;

	while (current)
	{
		printf("%D\n", current->n);
		current = current->next;

		counter++;
	}
	return (counter);
}

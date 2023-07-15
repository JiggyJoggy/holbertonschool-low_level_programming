#include "lists.h"

/**
 * print_listint - entry point
 *
 * description: prints all the elements of a list
 * @h: points to the head
 *
 * Return: num of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->num);
		counter++;

		h = h->next;
	}
	return (counter);
}

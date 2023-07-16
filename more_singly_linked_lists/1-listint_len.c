#include "lists.h"

/**
 * listint_len - entry point
 *
 * description: returns the number of elements in a linked list
 * @h: pointer to the head
 *
 * Return: int
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;

		h = h->next;
	}
	return (counter);
}

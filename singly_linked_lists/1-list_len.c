#include "lists.h"

/**
 * list_len - entry point
 *
 * description: returns the number of elements in a linked list
 * @h: pointer to a header
 *
 * Return: num of elements in linked list
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;
	const list_t *temp = h;

	while (temp)
	{
		counter++;

		temp = temp->next;
	}
	return (counter);
}

#include "lists.h"

/**
 * dlistint_len - entry point
 *
 * description: returns the number of elements in linked list
 * @h: pointer to the header
 *
 * Return: num
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *temp = h;

	while (temp)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}

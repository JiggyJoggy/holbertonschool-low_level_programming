#include "lists.h"

/**
 * free_dlistint - entry point
 *
 * description: frees a list
 * @head: pointer to the head node
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

#include "lists.h"

/**
 * free_listint - entry point
 *
 * description: frees a list
 * @head: points to the head
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}

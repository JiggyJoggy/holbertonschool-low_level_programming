#include "lists.h"

/**
 * free_listint2 - entry point
 *
 * description: frees a list
 * @head: points to the pointer of head
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;

		free(current);
	}
	*head = NULL;
}

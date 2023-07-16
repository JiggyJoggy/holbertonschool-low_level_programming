#include "lists.h"

/**
 * pop_listint - entry point
 *
 * description: delets the head node of a list
 * @head: points to the pointer of head
 *
 * Return: 0 if empty, else return the head node's data
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *current;

	if (*head == NULL)
	{
		return (0);
	}

	current = *head;
	*head = (*head)->next;

	n = current->n;
	free(current);

	return (n);
}

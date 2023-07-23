#include "lists.h"

/**
 * delete_dnodeint_at_index - entry point
 *
 * description: deletes the node at index of a linked list
 * @head: points to the pointer of the head node
 * @index: index of node
 *
 * Return: -1 if failed, else return 1 if it succeeded
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;

	if (*head == 0)
	{
		return (-1);
	}
	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	if (index == 1)
	{
		temp = *head;
		temp = temp->next;
		if (!temp->next)
		{
			temp->prev->next = NULL;
			free(temp);
			return (1);
		}
	}
	temp = *head;

	while (index >= 1)
	{
		temp = temp->next;
		index--;

		if (!temp)
			return (-1);
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
	return (1);
}

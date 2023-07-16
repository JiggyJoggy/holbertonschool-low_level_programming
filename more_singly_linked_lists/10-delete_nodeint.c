#include "lists.h"

/**
 * delete_nodeint_at_index - entry point
 *
 * description: deletes the node at index of a linked list
 * @head: points to the pointer of head
 * @index: index of the node
 *
 * Return: -1 if failed, else return 1 if succeeded
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *current;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
	{
		prev = *head;
		*head = (*head)->next;
		free(prev);
		return (1);
	}
	current = *head;
	prev = NULL;
	
	while (current != NULL)
	{
		if (i == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}
		prev = current;
		current = current->next;
		i++;
	}
	if (i == index)
	{
		prev->next = NULL;
		free(current);
		return (1);
	}
	return (-1);
}

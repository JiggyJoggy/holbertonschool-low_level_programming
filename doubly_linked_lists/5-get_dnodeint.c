#include "lists.h"

/**
 * get_dnodeint_at_index - entry point
 *
 * description: returns the nth node of a linked list
 * @head: pointer to the head node
 * @index: index of node
 *
 * Return: NULL if failed, else return nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i, count;

	if (!head)
	{
		return (NULL);
	}

	current = head;
	count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	if (index >= count)
	{
		return (NULL);
	}

	i = 0;
	current = head;
	
	while (i <index && current != NULL)
	{
		current = current->next;
		i++;
	}
	return (current);
}

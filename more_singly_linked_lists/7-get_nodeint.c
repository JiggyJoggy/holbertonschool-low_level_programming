#include "lists.h"

/**
 * get_nodeint_at_index - entry point
 *
 * description: returns the nth node of a linked list
 * @head: points to the head
 * @index: index of node
 *
 * Return: NULL if node does not exist, else return nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		if (i == index)
		{
			current = head;
			return (current);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}

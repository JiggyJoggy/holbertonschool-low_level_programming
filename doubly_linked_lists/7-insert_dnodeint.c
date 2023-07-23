#include "lists.h"

/**
 * insert_dnodeint_at_index - entry point
 *
 * description: inserts a new node at given pos
 * @h: points to the pointer of head
 * @idx: index of node
 * @n: num data
 *
 * Return: NULL if failed or not possible to add at idx
 * else return address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *newNode;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	
	while (idx != 1)
	{
		current = current->next;

		if (!current)
		{
			return (NULL);
		}
		idx--;
	}
	if (!current->next)
	{
		return (add_dnodeint_end(h, n));
	}
	newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->prev = current;
	newNode->next = current->next;
	current->next->prev = newNode;
	current->next = newNode;

	return (newNode);
}

#include "lists.h"

/**
 * insert_nodeint_at_index - entry point
 *
 * description: inserts a new node at a given position
 * @head: pointer that points to the head
 * @idx: index of node
 * @n: num
 *
 * Return: NULL if failed or unable to add new node at index
 * else return list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *prev, *current;
	unsigned int i = 0;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (*head == NULL && idx == 0)
		newNode->next = NULL;
		*head = newNode;
		return (newNode);
	current = *head;
	prev = NULL;

	while (current != NULL)
	{
		if (i == idx)
		{
			newNode->next = current;

			if (prev != NULL)
				prev->next = newNode;
			else
				*head = newNode;
			return (newNode);
		}
		prev = current;
		current = current->next;
		i++;
	}
	if (i == idx)
		newNode->next = NULL;
		prev->next = newNode;
		return (newNode);

	free(newNode);
	return (NULL);
}

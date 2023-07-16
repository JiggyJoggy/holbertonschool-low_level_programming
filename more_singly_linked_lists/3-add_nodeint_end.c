#include "lists.h"

/**
 * add_nodeint_end - entry point
 *
 * description: adds a new node at the end of a list
 * @head: points to the pointer of the head node
 * @n: int num
 *
 * Return: NULL if fails, else return address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *current;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;

		return (newNode);
	}

	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = newNode;

	return (newNode);
}

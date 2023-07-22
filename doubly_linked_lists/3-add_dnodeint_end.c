#include "lists.h"

/**
 * add_dnodeint_end - entry point
 *
 * description: adds a new node at the end of a list
 * @head: points to the pointer of the head node
 * @n: data num
 *
 * Return: NULL if failed, else return address of new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	dlistint_t *temp;

	if (!newNode)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;
	temp = *head;

	if (!(*head))
	{
		newNode->prev = NULL;
		*head = newNode;

		return (newNode);
	}

	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = newNode;
	newNode->prev = temp;

	return (newNode);
}

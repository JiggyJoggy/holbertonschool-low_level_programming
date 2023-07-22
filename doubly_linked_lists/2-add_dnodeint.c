#include "lists.h"

/**
 * add_dnodeint - entry point
 *
 * description: adds a new node at the beginning of a list
 * @head: points to the pointer of the head node
 * @n: num data
 *
 * Return: NULL if failed, else return address of new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = (*head);
	newNode->prev = NULL;

	if ((*head))
	{
		(*head)->prev = newNode;
	}
	(*head) = newNode;

	return (newNode);
}

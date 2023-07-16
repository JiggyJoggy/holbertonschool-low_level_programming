#include "lists.h"

/**
 * add_nodeint - entry point
 *
 * description: adds a new node at the beginning of a list
 * @head: head of the nodes
 * @n: int num
 *
 * Return: NULL if failed, else return the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}

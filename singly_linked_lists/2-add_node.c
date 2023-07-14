#include "lists.h"

/**
 * add_node - entry point
 *
 * description: adds a new node at the beginning of a list
 * @head: points to a pointer to a header
 * @str: string arg
 *
 * Return: NULL if failed, else return address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (!newNode)
	{
		return (NULL);
	}

	newNode->str = strdup(str);

	if (!newNode->str)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = strlen(str);
	newNode->next = (*head);

	(*head) = newNode;

	return (newNode);
}

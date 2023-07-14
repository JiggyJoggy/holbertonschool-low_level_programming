#include "lists.h"

/**
 * add_node_end - entry point
 *
 * description: adds a new node at the end of a list
 * @head: points to a pointer to a header
 * @str: string arg
 *
 * Return: NULL if failed, else return address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	list_t *temp = *head;

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
	newNode->next = NULL;

	if (!*head)
	{
		*head = newNode;
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;

			temp-> = newNode;
		}
	}
	return (newNode);
}

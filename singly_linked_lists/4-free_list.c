#include "lists.h"

/**
 * free_list - entry point
 *
 * description: frees a list
 * @head: pointer to a header
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *curr;

	while (head)
	{
		curr = head;
		head = head->next;
		free(curr->str);
		free(curr);
	}
}

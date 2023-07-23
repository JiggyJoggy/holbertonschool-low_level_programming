#include "lists.h"

/**
 * sum_dlistint - entry point
 *
 * description: sum of all the data (n) of a linked list
 * @head: points to the head of the node
 *
 * Return: 0 if list is empty, else return sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (0);
	}

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

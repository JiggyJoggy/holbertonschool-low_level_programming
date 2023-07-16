#include "lists.h"

/**
 * sum_listint - entry point
 *
 * description: the sum of all the data of a linked list
 * @head: points to the head
 *
 * Return: 0 if empty, else return sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

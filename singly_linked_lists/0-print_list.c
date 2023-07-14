#include "lists.h"

/**
 * print_list - entry point
 *
 * description: prints all the elements of a list_t list
 * @h: pointer to a header
 *
 * Return: [0] (nil) if str is NULL, else print number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		counter++;

		h = h->next;
	}
	return (counter);
}

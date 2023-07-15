#ifndef LIST_H
#define LIST_H
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * 
 * description: singly linked list node structure
 * @n: int
 * @next: points to the next node
 *
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;

} listint_t;

size_t print_listint(const listint_t *h);

#endif

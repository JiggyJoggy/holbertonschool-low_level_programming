#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct list_s - singly linked list
 *
 * Description: node structure
 *
 * @str: string memory
 * @len: length of str
 * @next: points to next node
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
#endif

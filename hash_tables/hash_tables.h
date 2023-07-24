#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * struct hash_node_s - node of a hash table
 *
 * @key: the key; string
 * @value: corresponding to a key
 * @next: pointer to the next node of a list
 */

typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - hash table data struct
 *
 * @size: the size of the array
 * @array: an array of size
 */

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
#endif

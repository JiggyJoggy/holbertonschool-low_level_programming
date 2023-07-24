#include "hash_tables.h"

/**
 * hash_table_set - entry point
 *
 * description: adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: with key
 *
 * Return: 0 if failed, else return 1 if it succeeded
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *head, *newNode;

	if (!ht || !key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];

	while (head)
	{
		if (strcmp(head->key, key) == 0)
		{
			free(head->value);
			head->value = strdup(value);

			if (!head->value)
				return (0);

			return (1);
		}
		head = head->next;
	}
	newNode = malloc(sizeof(hash_node_t));

	if (!newNode)
		return (0);

	newNode->key = strdup(key);

	if (!newNode->key)
		return (0);
	newNode->value = strdup(value);

	if (!newNode->value)
		return (0);

	newNode->next = ht->array[index];
	ht->array[index] = newNode;
	return (1);
}

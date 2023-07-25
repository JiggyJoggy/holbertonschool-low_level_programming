#include "hash_tables.h"

/**
 * hash_table_get - entry point
 *
 * description: retrieves a value associated with a key
 * @ht: pointer to an hash table
 * @key: str key
 *
 * Return: NULL if key can't be found, else return value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head;

	if (!ht || !key)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];

	while (head)
	{
		if (strcmp(head->key, key) == 0)
		{
			return (head->value);
		}
		head = head->next;
	}
	return (NULL);
}

#include "hash_tables.h"

/**
 * hash_table_delete - entry point
 *
 * description: deletes a hash table
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head;
	hash_node_t *temp;
	unsigned long int index;

	if (!ht)
	{
		return;
	}

	for (index = 0; index < ht->size; index++)
	{
		head = ht->array[index];

		while (head)
		{
			temp = head;
			head = head->next;

			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}

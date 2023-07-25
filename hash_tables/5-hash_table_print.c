#include "hash_tables.h"

/**
 * hash_table_print - entry point
 *
 * description: prints a hash table
 * @ht: points to hash table
 *
 * Return: hash table, else print out nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head;
	unsigned long int index;
	int end = 0;

	if (!ht)
	{
		return;
	}
	printf("{");
	
	for (index = 0; index < ht->size; index++)
	{
		head = ht->array[index];

		while (head)
		{
			if (end == 1)
			{
				printf(", ");
			}
			end = 1;
			printf("'%s': '%s'", head->key, head->value);
			headh = head->next;
		}
	}
	printf("}\n");
}

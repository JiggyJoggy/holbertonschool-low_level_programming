#include "hash_tables.h"

/**
 * hash_table_create - entry point
 *
 * description: function that creates a hash table
 * @size: size of the array
 *
 * Return: NULL if failed, else return pointer to new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int index;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (!table)
	{
		return (NULL);
	}

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		table->array[index] = NULL;
	}
	return (table);
}

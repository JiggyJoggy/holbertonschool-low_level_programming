#include "hash_tables.h"

/**
 * key_index - entry point
 *
 * description: gives you the index of a key
 * @key: key of hash
 * @size: size of array
 *
 * Return: index of key/value pair
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	hash = hash % size;

	return (hash);
}

#include "hash_tables.h"

/**
 * key_index - hash function; returns the index of a key
 * @key: the key whose index is required
 * @size: size of the array of the hash table
 *
 * Return: index for the provided key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);

	return (hash % size);
}

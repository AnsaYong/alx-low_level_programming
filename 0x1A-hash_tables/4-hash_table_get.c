#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key whose value is required
 *
 * Return: value associated with the key, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hash_node;
	unsigned long int idx;

	const unsigned char *unsigned_key = (const unsigned char *)key;

	/* 1. get the required index */
	idx = key_index(unsigned_key, ht->size);

	/* 2. get the first node at that index - most likely linked to others */
	hash_node = ht->array[idx];

	/* 3. iterate through the linked lists at that index to find key */
	while (hash_node != NULL)
	{
		/* compare each key in the linked list with the provided key */
		if (strcmp(hash_node->key, key) == 0)
		{
			return (hash_node->value);
		}
		hash_node = hash_node->next;
	}

	return (NULL);
}

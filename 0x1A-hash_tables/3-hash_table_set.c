#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash_node;
	hash_node_t *current;
	unsigned long int idx;

	const unsigned char *unsigned_key = (const unsigned char *)key;

	if (strcmp(key, "") == 0)
		return (0);

	/* 1. Create hash node */
	hash_node = create_hash_node(key, value);
	if (hash_node == NULL)
		return (0);

	/* 2. find the appropriate index using the hash function */
	idx = key_index(unsigned_key, ht->size);

	/* 3. check if there already is data at the provided hash table index */
	current = ht->array[idx];
	if (current == NULL)
	{
		/* key does not exist so insert directly */
		ht->array[idx] = hash_node;
	}
	else
	{
		/* handle collision - add the new node at the beginning of the list */
		hash_node->next = current;	/* make new node point to current head */
		ht->array[idx]->next = hash_node;	/* update head to be the new node */
	}

	return (1);
}

/**
 * create_hash_node - creates a hash_node - a hash table item
 * @key: key
 * @value: value associated to the key
 *
 * Return: pointer to the hash node
 */
hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *hash_node;

	/* assign memory to create hash node */
	hash_node = malloc(sizeof(hash_node_t));
	if (hash_node == NULL)
		return (NULL);

	hash_node->key = malloc(strlen(key) + 1);
	if (hash_node->key == NULL)
	{
		free(hash_node);
		return (NULL);
	}

	hash_node->value = malloc(strlen(value) + 1);
	if (hash_node->value == NULL)
	{
		free(hash_node);
		return	(NULL);
	}

	/* populate the created hash node */
	strcpy(hash_node->key, key);
	strcpy(hash_node->value, value);

	hash_node->next = NULL;

	return (hash_node);
}

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
	hash_node_t *new_node, *current;
	unsigned long int idx;
	const unsigned char *unsigned_key = (const unsigned char *)key;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	/* 1. Create hash node */
	new_node = create_hash_node(key, value);
	if (new_node == NULL)
		return (0);

	/* 2. find the appropriate index using the hash function */
	idx = key_index(unsigned_key, ht->size);
	/* 3. check if there already is data at the provided hash table index */
	current = ht->array[idx];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			/* Key already exists, update the value */
			free(current->value); /* Free the old value */
			current->value = strdup(value); /* Update with the new value */
			if (current->value == NULL)
				return (0);
			free(new_node->key); /* Free new node's key (not needed) */
			free(new_node->value);
			free(new_node); /* Free the new node */
			return (1);
		}
		current = current->next;
	}

	/* If key does not exist, add the new node at the beginning */
	new_node->next = ht->array[idx];	/* new node to current head */
	ht->array[idx] = new_node;	/* update head to be the new node */

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

	hash_node->key = strdup(key);
	if (hash_node->key == NULL)
	{
		free(hash_node);
		return (NULL);
	}

	hash_node->value = (value != NULL) ? strdup(value) : strdup("");
	if (hash_node->value == NULL)
	{
		free(hash_node->key);
		free(hash_node);
		return	(NULL);
	}

	hash_node->next = NULL;

	return (hash_node);
}

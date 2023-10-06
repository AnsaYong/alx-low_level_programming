#include "hash_tables.h"

/**
 * free_hash_node - frees a hash node and its elements
 * @hash_node: the hash node to free
 */
void free_hash_node(hash_node_t *hash_node)
{
	if (hash_node == NULL)
		return;

	free(hash_node->key);
	free(hash_node->value);
	free(hash_node);
}

/**
 * hash_table_delete - deletes a hash table and its elements
 * @ht: the hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *next;
	unsigned long int i;
	hash_node_t *current;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			next = current->next;
			free_hash_node(current); /* Free current node and its elements */
			current = next;
		}
	}

	free(ht->array); /* Free the array of buckets */
	free(ht); /* Free the hash table itself */
}

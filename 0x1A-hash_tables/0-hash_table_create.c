#include "hash_tables.h"

/**
 * hash_table_create - creates and initializes a hash table
 * size: The size of the array
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;	/* size and pointer to array of hash nodes */

	if (size <= 0)
	{
		return (NULL);
	}

	/* create hash table by allocating memory */
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}

	/* initialize the hash table */
	table->size = size;
	/* each cell is POINTER to linked list - hash_node_t *, hence... */
	table->array = calloc(size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);	/* release the hash table memory */
		return (NULL);
	}

	/* set each element in the array to NULL to ensure it's empty */
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}

	return (table);
}

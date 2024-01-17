#include <stdio.h>
#include <math.h>
#include "search_algos.h"
/**
 * jump_list - Searches for a value in a sorted list of integers
 * in a linked list using Jump search.
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in the list.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where value is located, or NULL if not found.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump_step = sqrt(size), next_jump;
	size_t i;
	listint_t *current = list, *prev = NULL;

	if (list == NULL)
		return NULL;

	while (current != NULL && current->n < value)
	{
		prev = current;

		/* Move current pointer by the jump step or until end of the list */
		next_jump = MIN(current->index + jump_step, size - 1);
		for (i = current->index; i < next_jump && current->next != NULL; i++)
			current = current->next;

		printf("Value checked at index [%lu] = [%d]\n",
				current->index, current->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, current->index);

	/* Perform linear search in the block identified by Jump search */
	while (prev != NULL && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);

		if (prev->n == value)
			return prev;

		prev = prev->next;
	}

	return NULL; /* Value not found */
}

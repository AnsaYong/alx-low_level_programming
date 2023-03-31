#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees up memory created for a list_t list
 * @list_t: structure of the list nodes
 * @head: pointer to the head of a linked list
 */
void free_list(list_t *head)
{
	list_t *current;

	/* iterate over all members of the list */
	while (head != NULL)
	{
		current = head;	/* assign the current node to "current" */
		head = head->next;	/* head pointer now points to the next node */
		free(current->str);	/* free memory allocated to "str" */
		free(current);	/* free memory allocated for the entire node */
	}
}

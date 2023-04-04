#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insertes a new node at a given position
 * @head: pointer to first node of linked list
 * @idx: index at which to insert node
 * @n: data for the new node
 *
 * Return: address of the node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;	/* to check the index */
	listint_t *temp1, *temp2, *newNode;	/* to navigate list and new node ptr */

	temp1 = *head; /* copy head ptr to temp1 - use to move through list */
	while (i < idx)	/* to stop at the last node before the index */
	{
		temp1 = temp1->next; /* temp1 now points to the next node */
		i++;
	}

	if (temp1 == NULL)	/* if it is not possible to add a node here */
		return (NULL);

	newNode = malloc(sizeof(listint_t));	/* create new node */
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;	/* update the data of the new node with n */
	temp2 = temp1->next;	/* copy what temp1 is pointing to , to temp2 */
	temp1->next = newNode;	/* temp1 now points to newNode */
	newNode->next = temp2; /* newNode now points to the next node on the list */

	return (newNode);
}

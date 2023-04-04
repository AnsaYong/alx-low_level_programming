#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the nead node of a listint_t linked list
 * and returns the head node's data (n)
 * @head: pointer to the start of the linked list
 *
 * Return: deleted head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *del = NULL;	/* to store address of node to be deleted */
	int data = 0;	/* to store data in the node to be deleted */

	if (*head == NULL)	/* check whether list exists or not */
		return (0);

	data = (*head)->n;	/* copy data (n) from the node to be deleted */
	del = *head;	/* copy address of first node to del */
	*head = (*head)->next;	/* move head ptr to second node */
	free(del);	/* delete first node */

	return (data);
}

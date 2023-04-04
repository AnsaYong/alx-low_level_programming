#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: a pointer to the start of the linked list
 * @n: the integer component of the node to be inserted in the linked list
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = NULL; /* to temporarily store new node */

	if (*head == NULL) /* if head is not pointing to any node */
	{
		/* create node and store its loc in head */
		(*head) = malloc(sizeof(listint_t));
		if (*head == NULL)	/* i.e. if malloc fails */
			return (NULL);
		(*head)->n = n;	/* updated the int part of the node with the param n */
		(*head)->next = NULL;	/* update link part to NULL, showing end of list */
	}
	else	/* if head already points to the first node */
	{
		temp = malloc(sizeof(listint_t));
		if (temp == NULL)
			return (NULL);
		temp->n = n;
		temp->next = (*head);	/* link part of new node to point to first node */
		(*head) = temp;	/* head to point to ad of new node */
	}
	return (*head);
}

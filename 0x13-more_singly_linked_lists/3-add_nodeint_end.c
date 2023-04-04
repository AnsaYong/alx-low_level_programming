#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: points to the first node of the linked list
 * @n: int parameter of the node
 *
 * Return: address of the new element, or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = NULL;	/* to store new node */
	listint_t *end = NULL; /* to check link parts of pre-existing nodes */

	/* create new node and update is parameters */
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;	/* to mark end of linked list */

	/* if head is not pointing to any node make it point to new node */
	if (*head == NULL)
		*head = temp;
	else	/* if head is already pointing to the start of the list */
	{
		end = *head; /* copy the ad of the first node to find last node */

		/* navigate the linked list till end node i.e end-next == NULL*/
		while (end->next != NULL)	/* while link is not NULL */
			end = end->next;	/* update end with link */
		end->next = temp;	/* update its link with ad of new node */
	}
	return (temp);
}

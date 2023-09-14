#include "lists.h"

/**
 * add_dnodeint_end - add node to end of a doubly linked list
 * @head: reference (pointer to pointer) to the head of the list
 * @n: integer
 *
 * Return: address of new element on success, or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = NULL;

	/* check if head is pointing to a list */
	if (head == NULL)
		return (NULL);

	/* create new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* put the required data */
	new_node->n = n;
	/* it will go to the end, so make its next point to NULL */
	new_node->next = NULL;

	/* if the list is empty, update the head to new_node */
	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		return (new_node);
	}

	/* find the end of the list */
	temp = *head;
	while (temp->next != NULL)	/* stops when temp is at the last node */
		temp = temp->next;

	/* make next of the last node point to new node */
	temp->next = new_node;
	/* then the previous of the new node to point to temp */
	new_node->prev = temp;

	return (new_node);
}

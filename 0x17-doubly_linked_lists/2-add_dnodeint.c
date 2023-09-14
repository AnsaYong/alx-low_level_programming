#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: reference (pointer to pointer) to the head
 * @n: integer
 *
 * Return: address of the new element/node on success, NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	/* 1. allocate a new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* 2. put the required data */
	new_node->n = n;

	/* 3. make next of the new node the head and its prev NULL */
	new_node->next = *head;
	new_node->prev = NULL;
	/* 4. make prev of the current head point to new node */
	if ((*head) != NULL)
		(*head)->prev = new_node;

	/* 5. point head to new node */
	*head = new_node;

	return (new_node);
}

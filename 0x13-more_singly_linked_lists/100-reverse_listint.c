#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to pointer to start of the list
 *
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node = NULL, *prev = NULL;

	if (head == NULL || *head == NULL)
		return (*head);

	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next_node;
	}
	*head = prev;
	return (*head);
}

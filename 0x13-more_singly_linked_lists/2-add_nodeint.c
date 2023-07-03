#include "lists.h"

/**
 * add_nodeint - adds a new node to the start of a linked list
 * @head: pointer to a pointer which points to the start of the list
 * @n: the integer content of the list
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = NULL;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	if (*head == NULL)
	{
		newNode->next = NULL;
		*head = newNode;
	}
	else
	{
		newNode->next = *head;
		*head = newNode;
	}

	return (*head);
}

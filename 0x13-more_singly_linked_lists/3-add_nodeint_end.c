#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of a listint_t linked list
 * @head: pointer to pointer which points to the start of the list
 * @n: integer component of listint_t
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = NULL, *temp = NULL;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (*head == NULL)
	{
		newNode->next = NULL;
		*head = newNode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->next = NULL;
	}

	return (newNode);
}


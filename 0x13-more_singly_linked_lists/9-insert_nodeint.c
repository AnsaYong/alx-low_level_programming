#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to start of list
 * @idx: position to insert the new node
 * @n: data of the new node
 *
 * Return: address of the new node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = NULL, *aux = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	/* move to the required index */
	aux = *head;
	while (i < idx - 1 && aux != NULL && aux->next != NULL)
	{
		aux = aux->next;
		i++;
	}

	/* insert new node at the end of the list */
	if (i == idx - 1)
	{
		newNode->next = aux->next;
		aux->next = newNode;
		return (newNode);
	}

	printf("Invalid index\n");
	return (NULL);
}

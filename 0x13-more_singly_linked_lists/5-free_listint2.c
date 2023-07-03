#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to a pointer to the start of the list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	head = NULL;
}

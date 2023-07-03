#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t list
 * @head: pointer to the start of the list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *aux;

	if (head == NULL)
	{
		return (0);
	}

	aux = head;
	while (aux != NULL)
	{
		sum += aux->n;
		aux = aux->next;
	}
	return (sum);
}

#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head; reference to the start of a dlistint_t list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t numb = 0;
	const dlistint_t *temp = NULL;

	/* make temp the new h */
	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		numb++;
		temp = temp->next;
	}

	return (numb);
}

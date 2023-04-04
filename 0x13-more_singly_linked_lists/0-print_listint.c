#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - prints all elements of a listint_t list
 * @h: head (pointer to the first node) of the listint_t list
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		/*if (h->n == NULL)*/
		/*	return (1);*/
		printf("%d\n", h->n);
		elements++;
		h = h->next;
	}
	return (elements);
}

#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: head; reference to the start of the dlistint_t list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elts = 0;
	const dlistint_t *temp;

	temp = h;

	while (temp != NULL)
	{
		elts++;
		temp = temp->next;
	}

	return (elts);
}

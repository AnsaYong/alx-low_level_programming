#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: head of the linked list
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		n++;
		temp = temp->next;
	}
	return (n);
}

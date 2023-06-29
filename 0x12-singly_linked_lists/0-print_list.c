#include "lists.h"

/**
 * print_list - prints all elements of a linked list
 * @h: head of the linked list
 *
 * Return: number of elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		if (temp->str != NULL)
			printf("[%d] %s\n", temp->len, temp->str);
		else
			printf("[0] (nil)\n");
		n++;
		temp = temp->next;
	}
	return (n);
}

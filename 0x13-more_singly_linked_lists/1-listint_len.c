#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the start of the linked listint_t list
 *
 * Return: number of elements in the list or 0.
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;
	const listint_t *temp = NULL;

	if (h == NULL)
	{
		return (0);
	}

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		printf("Error\n");
		return (-1);
	}

	temp = h;
	while (temp != NULL)
	{
		n++;
		temp = temp->next;
	}

	return (n);
}

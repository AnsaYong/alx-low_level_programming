#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the start of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	const listint_t *temp;

	if (h == NULL)
		return (0);

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		printf("Error\n");
		return (-1);
	}

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		n++;
		temp = temp->next;
	}

	return (n);
}

#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linkes list
 * @head: pointer to the start of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	listint_t *temp = NULL;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp != NULL)
	{
		printf("[%p] %d\n", temp, temp->n);
		temp = temp->next;
	}

#include "lists.h"

size_t listint_len(const listint_t *h);

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the start of the linked list
 * @index: node whose data is to be returned
 *
 * Return: pointer to the indexth node of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (n < index)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		n++;
	}
	return (temp);
}

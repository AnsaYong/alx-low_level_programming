#include "lists.h"

/**pop_listint - deletes the head of a linked list
 * @head: pointer to a pointer to the start of the list
 *
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	/* temp = *head;*/
	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}

#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the start of the linked list
 * @index: position whose node is to be returned
 *
 * Return: pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;	/* to track the index */
	listint_t *temp = NULL; /* to store the address of node to be returned */

	n = 0;
	while (n <= index)	/* loop will end when n=index */
	{
		temp = head;	/* copy the current head ptr to temp */
		head = head->next;	/* move the current head ptr to the next node */
		n++;	/* increase n to track the index */
	}
	/* when the loop ends, temp is pointing to the node at the specified index */
	if (temp == NULL)
		return (NULL);

	return (temp);
}

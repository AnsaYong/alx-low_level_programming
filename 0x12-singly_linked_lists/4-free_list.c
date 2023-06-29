#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: head of the linked list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp1;

	while (head != NULL)
	{
		free(head->str);
		head->str = NULL;
		temp1 = head;
		head = head->next;
		free(temp1);
	}
	free(head);
}

#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: head of the linked list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp1, *temp2;
	temp1 = head;

	while (temp1 != NULL)
	{
		free(temp1->str);
		temp1->str = NULL;
		temp2 = temp1->next;
		free(temp1);
		temp1 = temp2;
	}
	free(head);
}

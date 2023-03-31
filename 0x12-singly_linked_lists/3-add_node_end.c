#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node to the end of a linked list
 * @head: entry point of the linked list
 * @str: a string content to store in the newly created node
 *
 * Return: address of the new element or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *temp = NULL, *last = NULL;

	/* length of string */
	while (str[len] != '\0')
		len++;

	/* create new node and initialize it */
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = len;
	temp->next = NULL; /* to show end of list */

	/* if the current node has a "next" pointer that is null */
	if ((*head) == NULL)
	{
		/* set the pointer to the new node */
		*head = temp;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = temp;
	}
	return (temp);
}

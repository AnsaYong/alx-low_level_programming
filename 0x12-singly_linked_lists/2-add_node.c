#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node to the beginning of a linked list
 * @head: entry point of the linked list
 * @str: a string content to store in the newly created node
 *
 * Return: address of the new element or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *temp = NULL;	/* needed to swap what head is pointing to */

	while (str[len] != '\0')	/* calculate length of str */
		len++;

	if ((*head) == NULL)	/* if no node has been created */
	{
		/* create the first node and make head point to it */
		(*head) = malloc(sizeof(list_t));
		if ((*head) == NULL)
			return (NULL);
		(*head)->str = strdup(str);
		(*head)->len = len;
		(*head)->next = NULL;
	}
	else	/* i.e. a node already exists */
	{
		/* create a new node, make it point to the first node */
		/* then make head point to the new node */
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);
		temp->str = strdup(str);
		temp->len = len;
		temp->(*head); /* copy the contents of head to link of new node */
		(*head) = temp;	/* update head to the address of the new node */
	}
	return (*head);
}

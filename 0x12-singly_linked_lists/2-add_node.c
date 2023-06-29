#include "lists.h"

/**
 * add_node - adds note to start of a list_t list
 * @head: pointer to head of list
 * @str: string
 *
 * Return: address of the new list element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *new_node = NULL;

	while (str[len] != '\0')
		len++;

	/* check if node exists */
	if ((*head) == NULL)
	{
		/* if not, create new node and make head point to it */
		(*head) = malloc(sizeof(list_t));
		if ((*head) == NULL)
			return (NULL);
		(*head)->str = strdup(str);
		(*head)->len = len;
		(*head)->next = NULL;
	}
	/*if node already exists */
	else
	{
		/* create node pointing to first node, make head point to n_node */
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
			return (NULL);
		new_node->str = strdup(str);
		new_node->len = len;
		new_node->next = (*head);
		(*head) = new_node;
	}
	return (*head);
}

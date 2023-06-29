#include "lists.h"

/**
 * add_node_end - adds node to the end of a linked list
 * @head: pointer to start of the linked list
 * @str: string
 *
 * Return: address of the new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *new_node = NULL, *last_node = NULL;

	while (str[len] != '\0')
		len++;

	new_ode = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if ((*head) == NULL)
		*head = new_node;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
	}
	return (new_node);
}

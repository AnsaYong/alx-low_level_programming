#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * main - check the code; but also adds new node to start of linked list (using 4 steps)
 *
 * Return: Always EXIT_SUCCESS (0)
 */
int main(void)
{
	dlistint_t *head;
	dlistint_t *new;
	dlistint_t hello = {8, NULL, NULL};
	size_t n;

	/* make head point to the first node */
	head = &hello;
	/* 1. allocate node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (EXIT_FAILURE);
	}
	/* 2. put in the data */
	new->n = 9;
	/* 3. make existing node prev point to the new node and next of new node to existing node */
	/* and prev of new node to NULL */
	head->prev = new;
	new->next = head;
	new->prev = NULL;
	/* 4. upadte head pointer to the new node, making it the new head of the list */
	head = new;

	n = print_dlistint(head);
	printf("-> %lu elements\n", n);
	free(new);
	return (EXIT_SUCCESS);
}

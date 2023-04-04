#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;        /* head is pointer to listint_t */
	listint_t *new;         /* new is pointer to listint_t */
	listint_t hello = {8, NULL};    /* hello is a listint_t */
	size_t n;

	head = &hello;  /* store the address of hello in head */
	new = malloc(sizeof(listint_t));        /* create space for a listint_t */
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}
	new->n = 9;     /* update the int parameter of new to 9 */
	new->next = head;       /* update the link of new to point to hello */
	head = new;     /* update the head pointer to point to new */
	n = print_listint(head); /* parse the head pointer to the func and store its return value in n */
	printf("-> %lu elements\n", n);
	free(new);
	return (0);
}

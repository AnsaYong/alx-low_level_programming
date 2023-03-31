#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * print_list - prints all the elements of a list
 * @h: header pointer to a struct list_s
 *
 * Return: the number of nodes in the linked list
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			n++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			n++;
		h = h->next;
		}
	}
	return (n);
}

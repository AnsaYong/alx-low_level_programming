#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

/** Data structures **/

/**
 * struct listint_s - singly linked list
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

#define MIN(a, b) ((a) < (b) ? (a) : (b))

/** Function prototypes **/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);

#endif /* SEARCH_ALGOS */

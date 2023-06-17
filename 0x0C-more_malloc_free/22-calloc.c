#include <stdlib.h>


void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;
	//int *arr_2;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);

	//arr_2 = arr;
	for (i = 0; i < (size * nmemb); i++)
		arr[i] = 0;

	return (arr);
}

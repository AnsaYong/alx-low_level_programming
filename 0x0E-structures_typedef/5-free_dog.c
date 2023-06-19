#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees struct pointer
 * @d: struct dog pointer
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
		d = NULL;
	}
}

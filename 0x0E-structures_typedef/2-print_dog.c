#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the dog structure
 * @d: a pointer to the new struct dog variable
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", (*d).name);
	printf("Age: %.6f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}

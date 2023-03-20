#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the created variable of type struct dog
 * @name: name of dog to initialize variable with
 * @age: age of the dog to initialize variable with
 * @owner: name of owner to initialize variable with
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}

#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog using dog_t
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, name_len, owner_len;
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* copy name to newly created memory*/
	name_len = strlen(name) + 1;
	new_dog->name = malloc(name_len);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
		new_dog->name[i] = name[i];
	new_dog->name[i] = '\0';
	/* copy owner to newly allocated memory */
	owner_len = strlen(owner) + 1;
	new_dog->owner = malloc(owner_len);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < owner_len; i++)
		new_dog->owner[i] = owner[i];
	new_dog->owner[i] = '\0';
	new_dog->age = age;

	return (new_dog);
}

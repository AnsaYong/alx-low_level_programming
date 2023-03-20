#include <stdlib.h>
#include "dog.h"

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - Copies a string pointed to by src, including the
 * terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: The name of the new dog.
 * @age: The age of the new dog.
 * @owner: The owner of the dog.
 *
 * Return: The new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
		return (NULL);

	(*nd).name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*nd).name == NULL)
	{
		free (nd);
		return (NULL);
	}

	(*nd).owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*nd).owner == NULL)
	{
		free ((*nd).name);
		free (nd);
		return (NULL);
	}

	(*nd).name = _strcopy((*nd).name, name);
	(*nd).age = age;
	(*nd).owner = _strcopy((*nd).owner, owner);

	return (nd);
}

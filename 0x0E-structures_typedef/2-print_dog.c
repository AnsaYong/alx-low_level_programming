#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: struct dog pointer
 */
void print_dog(struct dog *d)
{
	char *_name;
	float _age;
	char *_owner;

	if (d == NULL)
		return;

	_name = (*d).name;
	_age = (*d).age;
	_owner = (*d).owner;

	if (_name == NULL)
		_name = "(nil)";
	/* if (_age == NULL) */
	/*	_age = "(nil)"; */
	if (_owner == NULL)
		_owner = "(nil)";

	printf("Name: %s\n", _name);
	printf("Age: %f\n", _age);
	printf("Owner: %s\n", _owner);
}

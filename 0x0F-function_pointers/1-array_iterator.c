#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on
 * each element of array
 * @array: array whose elements need to be passed to a function
 * @size: size of the array
 * @action: function that will execute given parameters
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}

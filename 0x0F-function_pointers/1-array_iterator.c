#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter on
 * each element of an array also given as a parameter
 * @array: given array
 * @size: size of the array
 * @action: pointer to the function which will be used
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t k = 0;

	if (array == NULL || action == NULL)
		return;

	while (k < size)
	{
		action(array[k]);
		k++;
	}
}

#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function that excutes each array passed as argument
 * @array: the array to iterate over
 * @size: the size of array
 * @action: the action to perform on each array element
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}

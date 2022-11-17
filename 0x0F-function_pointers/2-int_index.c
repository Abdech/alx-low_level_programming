#include "function_pointers.h"

/**
 * int_index - this function search for an integer
 * @array: the array to search
 * @size: the number of elements in the array
 * @cmp: the function to use to compare values (returns non-zero upon a match)
 *
 * Return: return -1 on errors while 1 on sucesss
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp != NULL || array != NULL)
	{
		for (i = 0; i < size; ++i)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	else
		return (-1);
	return (-1);
}

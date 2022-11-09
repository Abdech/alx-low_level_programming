#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - this functions creates an array of chars
 * @size: the size of the array multiplied by size of chars
 * @c: the character to be inserted
 *
 * Return: an array.
 */
char *create_array(unsigned int size, char c)
{
	char *carray;
	unsigned int i;

	carray = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		carray[i] = c;
	}
	carray[i] = '\0';
	return (carray);
}

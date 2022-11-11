#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc  - this functions creates an array of chars
 * @nmemb: the size of the array multiplied by size of chars
 * @size: the character to be inserted
 *
 * Return: an array.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c_arr;
	unsigned int i, lb;

	lb = nmemb * size;

	if (size == 0 || nmemb == 0)
		return (NULL);
	
	c_arr = malloc(nmemb * size);
	if (c_arr == NULL)
		return (NULL);
	for (i = 0; i < lb; i++)
		c_arr[i] = 0;
	return (c_arr);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - this function allocates memory using malloc
 *
 *@b: number of int to be allocated
 *
 *Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *malloc_ptr;

	malloc_ptr = malloc(b);
	if (malloc_ptr == NULL)
		exit(98);
	return (malloc_ptr);
}

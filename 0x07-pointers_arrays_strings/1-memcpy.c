#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_memcpy- This function will copy a block of memory
 *		with a particular value.
 *
 *
 *@dest:This is the destination of copied test	from s to be filled
 *@src: This is the source that is copied to dest
 *@n: This is the size 
 *
 * Return: This retruns a pointer to the memory area s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}


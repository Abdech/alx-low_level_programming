#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *memset- This function will fill a block of memory
 *		with a particular value.
 *
 *@s:Thi is the starting address to be filled
 *@b: This is the value to be filled
 *@n:This is the number of bytes to be filled starting
 *	from s to be filled
 *
 * Return: This retruns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

}


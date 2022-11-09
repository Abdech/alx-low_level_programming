#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_strncat- This function concatenates two dest and src
 *
 *@dest: The first parameter that concatenates with src
 *@src: The second parameter that concatenates with dest
 *@n:specify how many letters from src to be concatenated
 *
 * Return: This returns characters
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destLen = 0;
	int srcLen = 0;

	while (dest[destLen] != '\0')
		++destLen;
	while (src[srcLen] != '\0')
		++srcLen;
	for (i = 0; (i < srcLen && i < n); i++)
	{
		dest[destLen + i] = src[i];
	}
	return (dest);
	/*
	 * strncat(dest, src, n);
	 * return (dest);
	 */
}

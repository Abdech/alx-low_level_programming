#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_strncpy- This function copies strings from one another
 *
 *@dest: The first parameter is where new copied is
 *@src: The second parameter is the new copied to dest
 *@n:specify how many letters from src to be concatenated
 *
 * Return: This returns characters
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

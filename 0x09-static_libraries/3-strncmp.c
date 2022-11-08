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
	strncat(dest, src, n);
	return (dest);
}

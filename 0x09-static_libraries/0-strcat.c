#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_strcat- This function concatenates two dest and src
 *
 *@dest: The first parameter that concatenates with src
 *@src: The second parameter that concatenates with dest
 *
 * Return: This returns characters
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}

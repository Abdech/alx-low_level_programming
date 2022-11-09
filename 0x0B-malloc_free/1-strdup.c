#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - this function returns a pointer to a newly allocated
 *  space in memory, with duplicate of the parameter in d pointer
 * @str: str that is duplicated and saved to pointer
 *
 * Return: an array.
 */
char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
		return (NULL);

	s = malloc(strlen(str) + 1 * sizeof(char));
	if (s == NULL)
		return (NULL);
	{
		strcpy(s, str);
		return (s);
	}
}

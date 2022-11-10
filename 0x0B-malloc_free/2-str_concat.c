#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *str_concat - this function returns a pointer to a newly allocated
 *  space in memory, with duplicate of the parameter in d pointer
 * @s1: first parameter which is str
 * @s2: second parameter which is str that is added to s1
 *
 * Return: an array.
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int len_s1, len_s2, i, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;
	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
		;
	len = len_s2 + len_s1;
	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
		s[i] = s1[i];
	for (i = 0; i < len_s2; i++)
		s[len_s1 + i] = s2[i];
	return (s);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - this function concatenates s1 with s2 into pointer
 *
 *@s1: first string parameter
 *@s2: second string parameter that is concat to s1
 *@n: number chars for s2
 *
 *Return: a char pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *malloc_ptr;
	unsigned int len_s1, len, len_s2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;
	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
		;
	len = len_s1 + n; 
	malloc_ptr = malloc((len + 1) * sizeof(char));
	if (malloc_ptr == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
		malloc_ptr[i] = s1[i];
	for (i = 0; i < n; i++)
		malloc_ptr[len_s1 + i] = s2[i];
	return (malloc_ptr);
}

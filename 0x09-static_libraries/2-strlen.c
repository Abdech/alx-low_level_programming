#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strlen-  This function prints the length of the of the string
 *
 *@s: is the parameter that the length is counted
 *
 *Return: the functions returns an int which is the length
 */
int _strlen(char *s)
{
	int strLength = 0;

	while (*s != '\0')
	{
		strLength++;
		s++;
	}
	return (strLength);
}

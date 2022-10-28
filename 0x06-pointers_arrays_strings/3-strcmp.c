#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_strcmp- This function compares two strings
 *
 *@s1: The first parameter that is the leftString
 *@s2: The second parameter that is the rightString
 *
 * Return: This retruns an int 0 if matches
 * >0 when right ascii value is higher and <0 when is lower
 */

int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);
	return (result);
}

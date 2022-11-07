#include <ctype.h>
#include <stdio.h>
#include "main.h"

/**
 *_isdigit- checks if arg is upper or lowercase
 *
 * @c: is the input parameter that is checked
 * Return: 0 or 1 depending on the input
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}

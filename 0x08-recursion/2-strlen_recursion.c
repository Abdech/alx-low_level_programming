#include "main.h"
#include <stdio.h>

/**
  * _strlen_recursion - this function returns
  * the length of a string using recursion
  *
  *@s: is parameter that is being counted
  *
  *Return:returns an int
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

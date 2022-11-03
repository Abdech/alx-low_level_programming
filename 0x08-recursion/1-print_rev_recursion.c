#include "main.h"
#include <stdio.h>

/**
  * _print_rev_recursion - this function reverse the para passed
  *
  *@s: is parameter that is being reserved
  *
  *Return: void is returned
  */

void _print_rev_recursion(char *s)
{
	/*
	 *check parameter is
	 *available
	 */

	if (*s)
	{
		_print_rev_recursion(s + 1);
	}
}

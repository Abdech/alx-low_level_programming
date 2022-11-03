#include "main.h"
#include <stdio.h>

/**
  * _puts_recursion - this function call itself until conditiion is met
  *
  *@s: is parameter that is being decrement
  *
  *Return: void is returned
  */

void _puts_recursion(char *s)
{
	/*
	 *check parameter is
	 *available
	 */

	if (*s)
	{
		/*
		 *insert one letter from
		*parameter and
		*the func call itself
		*plus 1 which takes
		*the next letter
		 */
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

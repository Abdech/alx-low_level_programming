#include "main.h"
#include <stdio.h>

/**
  * _pow_recursion - this function returns the value of
  * raise to the power of y.
  *
  *@x: is parameter that is the base
  *@y: is parameter that is raised by
  *
  *Return:returns an int
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}

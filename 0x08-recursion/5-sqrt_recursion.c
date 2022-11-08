#include "main.h"
#include <stdio.h>

/**
  * _sqrt_recursion - this function returns the square root of a
  * number
  *
  *@n: is parameter that is squared
  *
  *Return:returns an int
  */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else
		return (n * _sqrt_recursion(n - 1));
}

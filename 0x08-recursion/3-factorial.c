#include "main.h"
#include <stdio.h>

/**
  * factorial - this function returns factorial of a given number.
  *
  *@n: is parameter that is being factorized
  *
  *Return:returns an int
  */

int factorial(unsigned int n)
{
	if (n <= 1)
		return (-1);
	else
		return (n * factorial(n - 1));
}

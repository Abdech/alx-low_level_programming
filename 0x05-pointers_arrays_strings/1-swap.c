#include <stdio.h>
#include "main.h"

/**
 *swap_int- this function exchange the first parameter with the second
 *
 *@a: is the parameter that is changed with parameter b
 *@b: is the parameter that is changed with paramet a
 *
 *return - the functions returns a void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

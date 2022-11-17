#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - the function prints name
 *
 *@name: name to be printed
 *@f: pointer function
 *
 *Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}

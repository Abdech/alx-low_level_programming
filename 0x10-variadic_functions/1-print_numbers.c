#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - functions returns the sum of all its parameters
 *
 *@n: is the number of arguments passed
 *@separator: is the string to be printed b/w numbers
 *
 *Return: an int
 */

void print_numbers(const char *seperator, const unsigned int n,  ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (seperator == NULL)
			exit (1);
		else
			printf("%d%s ", va_arg(ap, unsigned int), seperator);
	}
	printf("\n");
	va_end(ap);
}

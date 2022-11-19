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

void print_numbers(const char *separator, const unsigned int n,  ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			separator = "";
		else
		{
			printf("%d", va_arg(ap, unsigned int));
			if (i != (n - 1))
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}

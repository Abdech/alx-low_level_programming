#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - functions returns the parameters passed to it as string
 *
 *@n: is the number of arguments passed
 *@separator: is the string to be printed b/w numbers
 *
 *Return: an int
 */

void print_strings(const char *separator, const unsigned int n,  ...)
{
	unsigned int i;
	va_list ap;
	char *strpassed;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		strpassed = va_arg(ap, char *);
		if (separator == NULL)
			separator = "";
		else if (strpassed == NULL)
			printf("(nil)");
		else
		{
			printf("%s", strpassed);
			if (i != (n - 1))
				printf("%s ", separator);
		}
	}
	va_end(ap);
	printf("\n");
}

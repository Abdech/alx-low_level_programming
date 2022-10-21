#include "main.h"
#include <stdio.h>
/**
 *more_numbers - prints 10times 0 to 14 o one line
 *
 * Return: its void
 */

void more_numbers(void)
{
	int repeat = 0;

	while (repeat <=  10)
	{
		int i = 0;

		while (i <= 14)
		{
			_putchar((i / 10) + '0');
		_putchar('0' +  (i % 10));
		i++;
		}
	_putchar('\n');
	repeat++;
	}
}

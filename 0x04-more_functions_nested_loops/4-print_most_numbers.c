#include "main.h"
#include <stdio.h>
/**
 *print_most_numbers- checks if arg is upper or lowercase
 *
 * Return: its voidt
 */

void  print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
			i++;
			continue;
		}
		_putchar('0' +  i);
		i++;
	}
	_putchar('\n');
}

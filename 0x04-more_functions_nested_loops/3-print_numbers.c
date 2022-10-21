#include "main.h"
#include <stdio.h>
/**
 *print_numbers- checks if arg is upper or lowercase
 *
 * Return: its voidt
 */

void  print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar('0' +  i);
		i++;
	}
	_putchar('\n');
}

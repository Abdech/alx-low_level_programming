#include <stdio.h>
#include "main.h"

/**
  * _puts_recurion - this function call itself until conditiion is met
  * 
  *@s: is parameter that is being decrement
  * 
  *Return: void is returned
  */

int main(void)
{
	int n;

	n = _strlen_recursion("Corbin Coleman");
	printf("%d\n", n);
	return (0);
}

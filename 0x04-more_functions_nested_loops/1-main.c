#include <stdio.h>
#include "main.h"

int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isdigit(c));
	c = '1';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}

#include "main.h"
#include <stdio.h>

void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i) 
		{
			printf("\n");
		}
		printf("0x%03x", buffer[i]);
		i++;
	}
	printf("\n");
}
int main(void)
{ 
	char buffer[98] = {0x00};

	simple_print_buffer(buffer, 98);
	_memcpy(buffer, 0x01, 95);
	printf("____---------------------------------------");
	simple_print_buffer(buffer, 98);
	return (0);
}


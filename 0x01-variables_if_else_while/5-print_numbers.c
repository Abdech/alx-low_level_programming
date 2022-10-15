#include <stdio.h>
#include <ctype.h>
/**
 *main - Entry point
 *
 *Return: 0
 */
int main(void)
{
	int nums = 0;

	while (nums < 10)
	{
		printf("%d", nums);
		nums++;
	}
	putchar('\n');
	return (0);
}

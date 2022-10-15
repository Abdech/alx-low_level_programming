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
		putchar((nums) + '0');
		if (nums == 9)
		{
			nums++;
			break;
		}
		putchar(',');
		putchar(' ');
		nums++;
	}
	putchar('\n');
	return (0);
}

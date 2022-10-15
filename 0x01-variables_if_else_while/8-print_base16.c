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
	int letters = 'A';

	while (nums < 10)
	{
		putchar((nums) + '0');
		nums++;
	}
	while (letters <= 'F')
	{
		int lowerCase = tolower(letters);


		putchar(lowerCase);
		letters++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <ctype.h>
/**
 *main - Entry point
 *
 *Return: 0
 */
int main(void)
{
	int letters = 'A';
	int caps = 'A';

	while (letters <= 'Z')
	{
		int lowerCase = tolower(letters);

		putchar(lowerCase);
		letters++;
	}
	while (caps <= 'Z')
	{
		putchar(caps);
		caps++;
	}
	putchar('\n');
	return (0);
}

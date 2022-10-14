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

	while (letters <= 'Z')
	{
		int lowerCase = tolower(letters);

		putchar(lowerCase);
		letters++;
	}
	putchar('\n');
	return (0);
}

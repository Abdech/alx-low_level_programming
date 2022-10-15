#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 *main - Entry point
 *
 *Return: 0
 */
int main(void)
{
	int letters = 'Z';

	while (letters >= 'A')
	{
		int lowerCase = tolower(letters);

		putchar(lowerCase);
		letters--;
	}
	putchar('\n');
	return (0);
}

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

		if (letters == 'Q' || letters == 'E')
		{
			letters++;
			continue;
		}
		putchar(lowerCase);
		letters++;
	}
	putchar('\n');
	return (0);
}

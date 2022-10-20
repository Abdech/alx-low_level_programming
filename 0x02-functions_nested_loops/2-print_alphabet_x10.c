#include "main.h"
#include "ctype.h"
/**
 * print_alphabet_x10 - Prints alphabet
 *
 * Return: void
 */
void  print_alphabet_x10(void)
{
	int letters = 'A';
	int i = 0;

	while (i < 10)
	{
		while ( letters <= 'Z')
		{
		int lowerCase = tolower(letters);

		_putchar(lowerCase);
		letters++;
		}
			_putchar('\n');
			i++;
	}
}

#include "main.h"
#include "ctype.h"
/**
 * print_alphabet - Prints alphabet in small letter
 *
 * Return: void
 */
void  print_alphabet(void)
{
	int letters = 'A';

	while (letters <= 'Z')
	{
		int lowerCase = tolower(letters);

		_putchar(lowerCase);
		letters++;
	}
	_putchar('\n');
}

#include "main.h"
#include "ctype.h"
/**
 * main check the code
 *
 * Return:Always  0
 */
/*this function returns 0:*/
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
	return; 
}

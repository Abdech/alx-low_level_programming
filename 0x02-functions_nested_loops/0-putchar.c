#include "main.h"
/**
 * main -loops the string s
 * Return: Return 0
 */
/*this function returns 0:*/
int main(void)
{
	char s[] = "_putchar";
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char ans[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n ";

	fwrite(ans, 59, 1, stderr);
	return (1);
}

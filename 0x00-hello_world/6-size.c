#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	float f;
	long int li;
	long long int lli;
	signed char c;

	printf("Size of a char: %lu byte(s)\n", (unsigned char)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned char)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned char)sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned char)sizeof(lli));
	printf("Size of a float: %lu byte(s)\n", (unsigned char)sizeof(f));
	return (0);
}

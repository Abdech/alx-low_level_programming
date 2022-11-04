#include <stdio.h>
/**
 *main - this function prints all argumensts it receives.
 *
 *@argc: returns the count of array argv[]
 *@argv: stores the arrays that are passed
 *
 *Return: an int
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

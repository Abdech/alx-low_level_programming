#include <stdio.h>
#include <stdlib.h>
/**
 *main - this function add positive numbers
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
		if (atoi(argv[i] == char))
				printf("Error\n");
	}
	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", atoi(argv[1]) + atoi(argv[2]) + atoi(argv[3]));
		return (0);
	}
}

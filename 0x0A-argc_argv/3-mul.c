#include <stdio.h>
#include <stdlib.h>
/**
 *main - this function multiply two numbers passed as args
 *
 *@argc: returns the count of array argv[]
 *@argv: stores the arrays that are passed
 *
 *Return: an int
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		return (0);
	}
}

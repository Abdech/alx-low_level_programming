#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (isdigit(atoi(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		else 
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

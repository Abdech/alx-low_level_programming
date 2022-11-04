#include <stdio.h>
/**
 *main - this function prints the number of arguments passed
 *
 *@argc: returns the count of array argv[]
 *@argv: stores the arrays that are passed
 *
 *Return: an int
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

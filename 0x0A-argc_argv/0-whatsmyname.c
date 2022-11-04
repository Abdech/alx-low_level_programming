#include <stdio.h>
/**
 *
 *whatsmyname - this function prints its name 
 * 
 *@argc: returns the count of array argv[]
 *@argv: stores the arrays that are passed 
 * 
 *Return: an int
 */

int main(__attribute__((unused)) int argc, char* argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
 

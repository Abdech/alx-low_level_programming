#include <stdio.h>
#include "dog.h"
/**
 * print_dog - the function initialize a variable.
 *
 *@d: a dog structure
 */
void print_dog(struct dog *d)
{

	if (d != NULL)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: %s\n", "(nil)");
		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("Age: %d\n", 0);
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Age: %s", "(nil)");
	}
	else
		d = NULL;
}

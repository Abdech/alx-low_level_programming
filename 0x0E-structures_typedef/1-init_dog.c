#include <stdio.h>
#include "dog.h"
/**
 * init_dog - the function initialize a variable.
 *
 *@d: a dog structure
 *@name : Name of the new dog
 *@age: Age of the new dog
 *@owner: Owner of the new of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

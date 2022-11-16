#ifndef _STRUCT_DOG_
#define _STRUCT_DOG_

/**
 * struct dog - This is a dog little descr.
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_n;

/**
 * dog_n - Typedef for struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* _STRUCT_DOG_ */

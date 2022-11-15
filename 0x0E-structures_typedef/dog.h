#ifndef _STRUCT_
#define _STRUCT_

/**
 * struct dog - This is a dog little descr.
 * @name: Name of the dog
 * @age: Age of the dog 
 * @owner: Owner of the dog
 *
 * Description: Longer description
 */
struct dog 
{
	char *name; 
	float age;  
	char *owner;
};

/**
 * @dog_t: Typedef for struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* _STRUCT_ */

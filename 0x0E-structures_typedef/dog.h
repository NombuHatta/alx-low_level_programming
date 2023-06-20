#ifndef DOG_H
#define DOG_H


/**
 * struct dog - Dogs information
 * @name: Pointer to the name of the dog
 * @age: age of the dog
 * @owner: Pointer to the owner of the dog
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
 * dog_t - typedef for struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

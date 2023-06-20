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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * struct dog_t - Defines new type
 * @name: Pointer to the name of the dog
 * @age: Dog's age
 * @owner: Dog's owner
 */

typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

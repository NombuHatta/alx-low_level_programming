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
 * dog_t -typedef for struct dog
 * @name: New dog's name
 * @age: New dog's age
 * @owner: New dog's owner
 *
 * Return: Always 0 (Success)
 */
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

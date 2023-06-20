#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize's a variable of type struct dog
 * @d: The variable
 * @name: Pointer to the dog's name
 * @age: Dog's age
 * @owner: Pointer to dog's owner
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

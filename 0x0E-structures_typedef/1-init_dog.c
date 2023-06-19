#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a dog memory
 * @d: pointer to the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

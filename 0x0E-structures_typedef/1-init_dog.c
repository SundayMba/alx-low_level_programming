#include "dog.h"
/**
 * init_dog - initialize dog structure
 * @d: dog object
 * @name: name of dog
 * @age: age
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *dd = d;
	(*dd).name = name;
	(*dd).age = age;
	(*dd).owner = owner;
}

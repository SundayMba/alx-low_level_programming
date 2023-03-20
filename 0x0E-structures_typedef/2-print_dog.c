#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print a dog element
 * @d: a dog
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	char *name;
	char *owner;

	if (d != NULL)
	{
		name = (d->name == NULL) ? "nil" : d->name;
		owner = (d->owner == NULL) ? "nil" : d->owner;
		printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
	}
}

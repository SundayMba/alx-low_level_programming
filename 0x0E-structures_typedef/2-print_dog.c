#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print-dog - print dog information
 * @d: pointer to dog info
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\n", d->name);
	if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("Age: %s\n", "(nil)");
	printf("Owner: %s\n", d->owner);
}

#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - release a dog memory
 * Return: void
 * @d: dog object to release
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}

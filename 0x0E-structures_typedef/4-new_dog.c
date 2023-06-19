#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of owner
 *
 * Return: a newly created dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->name = _strcpy(name);
	new->owner = _strcpy(owner);
	new->age = age;
	return (new);
}

/**
 * _strcpy - copy string to new memory
 * @str: string to copy
 *
 * Return: copied string
 */
char *_strcpy(char *str)
{
	char *ptr;
	int i = 0, count = 0;

	while (str[i++] != '\0')
		count++;
	ptr = malloc(sizeof(char) * count + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < count; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
}

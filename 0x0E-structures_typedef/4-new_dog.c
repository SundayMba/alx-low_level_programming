#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of ther dog
 * Return: a pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int nLen;
	int oLen;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	nLen = _strlen(name);
	oLen = _strlen(owner);
	my_dog->name = malloc(nLen + 1);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->owner = malloc(oLen + 1);
	if (my_dog->owner == NULL)
	{
		free(my_dog);
		free(my_dog->name);
		return (NULL);
	}
	_strcpy(my_dog->name, name);
	_strcpy(my_dog->owner, owner);
	my_dog->age = age;
	return (my_dog);
}

/**
 * _strlen - cal. string length
 * @s: string to cal
 * Return: length of string
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count])
		count++;
	return (count);
}

/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source of the string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

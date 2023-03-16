#include <stdlib.h>

/**
 * create_array - create an array
 * @size: size of the array of the array of characters
 * @c: character to insert to the memory
 * Return: a pointer to a char
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = malloc((sizeof(char) * size));
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}

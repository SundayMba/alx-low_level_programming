#include <stdlib.h>

/**
 * create_array - create an array dynamically
 * @size: size of the array
 * @c: letter to write to the memory
 * Return: pointer to the created memory
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	ptr[i] = '\0';
	return (ptr);
}

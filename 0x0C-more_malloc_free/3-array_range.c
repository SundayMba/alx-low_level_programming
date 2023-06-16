#include <stdlib.h>

/**
 * array_range - function to create an array of integres
 * @min: minimum array size
 * @max: maximum array size
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int size, i = 0;

	size = max - min + 1;
	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	while (min <= max)
		ptr[i++] = min++;
	return (ptr);
}

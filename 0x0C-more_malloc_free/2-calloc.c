#include <stdlib.h>

/**
 * _calloc - contiguos allocation
 * @nmemb: number of members
 * @size: size of a single type
 * Return: pointer to the newly allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i = 0, total;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

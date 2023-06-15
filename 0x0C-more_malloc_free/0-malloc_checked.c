#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate and check allocated memory
 * @b: size of the memory to allocate
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}

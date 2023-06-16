#include <stdlib.h>

/**
 * _realloc - reallocate a pointer
 * @ptr: pointer to a previously allocated memory
 * @old_size: old array size
 * @new_size: new array size
 *
 * Return: a newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_dup;
	char *new_ptr;
	unsigned int i = 0;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
		new_ptr = malloc(new_size);
	else if (new_size == old_size)
		return (ptr);
	if (new_ptr == NULL)
		return (NULL);
	if (ptr == NULL)
		return (new_ptr);
	ptr_dup = ptr;
	while (i < old_size)
	{
		new_ptr[i] = ptr_dup[i];
		i++;
	}
	free(ptr);
	return (new_ptr);
}

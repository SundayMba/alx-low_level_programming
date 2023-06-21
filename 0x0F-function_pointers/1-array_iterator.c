#include "function_pointers.h"

/**
 * array_iterator - iterate trough an array
 * @array: collection of an integer to traverse
 * @size: number of element in the container
 * @action: function pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}

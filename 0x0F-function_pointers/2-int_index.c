#include "function_pointers.h"

/**
 * int_index - returns the index of an integer
 * @array: array of integers
 * @size: number of element in the array
 * @cmp: function pointers
 *
 * Return: index of the element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

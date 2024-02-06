#include "search_algos.h"

/**
 * linear_search - perform linear search on a list of integers
 * @array: list of integers
 * @size: size of the array
 * @value: value to search
 * Return: -1, if value is not present in the array or if array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}

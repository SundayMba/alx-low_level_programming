#include "search_algos.h"

/**
 * binary_search - a function that searches for a value in a sorted array
 * @array: list of integers
 * @size: size of the list of integers
 * @value: value to search for
 * Return: index, otherwise -1.
 */

int binary_search(int *array, size_t size, int value)
{
	int start, end, mid, i;

	start = 0;
	end = size - 1;
	if (array == NULL || size == 0)
		return (-1);
	while (start <= end)
	{
		mid = start + (end - start) / 2;
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i < end)
				printf(", ");
		}
		printf("\n");
		if (value == array[mid])
			return (mid);
		else if (value > array[mid])
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}

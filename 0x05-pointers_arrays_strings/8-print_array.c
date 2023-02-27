#include <stdio.h>
#include "main.h"

/**
 * print_array - print element of an array
 * @n: a pointer to an integer memory location
 * @a: pointer to the array
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}

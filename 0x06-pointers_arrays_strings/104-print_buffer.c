#include "main.h"

/**
 * print_buffer - print a buffer to stdout output
 * @b: pointer to the buffer
 * @size: size of the buffer
 * Return: line of the buffer
 */


void print_buffer(char *b, int size)
{
	int pos, k, i, j;

	pos = 10;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = i; j < pos; j++)
		{
			if (j >= size)
				printf("  ");
			else
				printf("%02x", b[j]);
			if (j % 2 != 0)
				printf(" ");
		}
		for (k = i; k < pos; k++)
		{
			if (k < size)
			{
				if (b[k] < 32 || b[k] > 126)
					printf(".");
				else
					printf("%c", b[k]);
			}
		}
		pos += 10;
		printf("\n");
	}
}


#include <stdio.h>
#include "main.h"
/**
 * main - entry point of the program
 * @argc: argument count
 * @argv: argument vector or or array or arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, count = -1;

	for (i = 0; i < argc; i++)
	{
		if (argv[i])
			count++;
	}
	printf("%d\n", count);
	return (0);
}

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
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < 1; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}

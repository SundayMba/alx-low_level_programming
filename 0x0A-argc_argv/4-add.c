#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of the program
 * @argc: argument count
 * @argv: argument vector or or array or arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			mul *= atoi(argv[i]);
		printf("%d\n", mul);
	}
	return (0);
}

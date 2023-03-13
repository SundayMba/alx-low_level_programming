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
	long int mul = 1;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc >= 1)
	{
		for (i = 1; i < argc; i++)
			mul *= atoi(argv[i]);
		printf("%ld\n", mul);
	}
	return (0);
}

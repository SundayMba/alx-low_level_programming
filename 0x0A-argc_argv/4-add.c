#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - entry point of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

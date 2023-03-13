#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point of the program
 * @argc: argument count
 * @argv: argument vector or or array or arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int add = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
				add += atoi(argv[i]);
			else if (isalpha(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", add);
	}
	return (0);
}

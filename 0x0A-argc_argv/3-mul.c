#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

#include <stdio.h>
/**
 * main - entry point of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	i = 0;
	while (argc--)
		printf("%s\n", argv[i++]);
	return (0);
}

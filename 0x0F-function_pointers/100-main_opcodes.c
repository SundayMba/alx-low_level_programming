#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcode - print opcode
 * @main_op: main opcode
 * @n: number of byte
 * Return: void
 */
void print_opcode(char *main_op, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", main_op[i]);
		if (i <  n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: array of argument
 * Return: succes
 */
int main(int argc, char **argv)
{
	int n_byte;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n_byte = atoi(argv[1]);
	if (n_byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcode((char *)&main, n_byte);
	return (0);
}

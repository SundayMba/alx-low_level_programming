#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: count of argument
 * @argv: argument vectors
 * Return: succes
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*fun_op_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	fun_op_ptr = get_op_func(argv[2]);
	if (fun_op_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = fun_op_ptr(num1, num2);
	printf("%d\n", result);
	return (0);
}

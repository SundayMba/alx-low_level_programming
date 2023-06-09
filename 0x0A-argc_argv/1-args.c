#include <stdio.h>
/**
 * main - entry point of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", --argc);
	return (0);
}

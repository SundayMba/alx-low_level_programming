#include <stdio.h>

/**
 * main - print the current file the macro __FILE__ was compile from
 * Return: 0 - success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

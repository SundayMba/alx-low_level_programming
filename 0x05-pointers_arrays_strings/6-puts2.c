#include "main.h"

/**
 * puts2 - put characters of strings to the stdout
 * @str: a pointer to a string memory location
 * Return: void
 */

void puts2(char *str)
{
	char *ptr;

	for (ptr = str; *ptr != '\0'; ptr += 2)
		_putchar(*ptr);
	_putchar('\n');
}

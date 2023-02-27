#include "main.h"

/**
 * puts2 - put characters of strings to the stdout
 * @str: a pointer to a string memory location
 * Return: void
 */

void puts2(char *str)
{
	char *ptr;
	int i, count = 0;

	for (ptr = str; *ptr != '\0'; ptr++)
		count++;
	for (i = 0; i < count; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}

#include "main.h"

/**
 * _puts - put characters of strings to the stdout
 * @str: a pointer to a string memory location
 * Return: void
 */

void _puts(char *str)
{
	char i, count = 0;

	for (i = str[0]; i != '\0'; i = *(str + count))
	{
		_putchar(i);
		count++;
	}
	_putchar('\n');
}

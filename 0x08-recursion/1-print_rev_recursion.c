#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse
 * @s: a pointer to the string to print
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	char c;

	if (*s == '\0')
		return;
	c = *s;
	_print_rev_recursion(s + 1);
	_putchar(c);
}

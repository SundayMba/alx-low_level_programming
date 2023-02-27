#include "main.h"

/**
 * print_rev - print string in reverse
 * @str: string to print
 * Return: void
 */
void print_rev(char *str)
{
	char c = *str;
	int count = 0;

	for (; c != '\0'; c = *(str + count))
		count++;
	--count;
	while (count >= 0)
	{
		_putchar(*(str + count));
		count--;
	}
	_putchar('\n');
}

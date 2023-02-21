#include "main.h"
/**
 * print_alphabet_x10 - print small letters 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	char count;

	for (count = 1; count <= 10; count++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}

#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary given integer
 * @n: integer value
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int flag = 0;

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	while (mask != 0)
	{
		if (mask & n)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
	if (!flag)
		_putchar('0');
}

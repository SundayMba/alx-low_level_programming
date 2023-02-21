#include "main.h"
/**
 * print_sign - print sign of n input
 * Return: (1, 0, or -1) depending on the implemetation
 * @n: int value to check the sign
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

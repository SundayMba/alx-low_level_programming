#include "main.h"
/**
 * print_last_digit - pruint the last digit of anumber
 * Return: the last digit
 * @n: stores the number
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last = -1 * last;
	_putchar('0' + last);
	return (last);
}

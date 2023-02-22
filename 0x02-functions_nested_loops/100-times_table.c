#include "main.h"
/**
 * print_times_table - function to print times table
 * Return: void
 * @n: number to print
 */
void print_times_table(int n)
{
	int i, j, currR, nextR, remP, whlP, last;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				currR = i * j;
				nextR = i * (j + 1);
				if (currR > 9 && currR < 100)
					print_to_std_char2(remP, whlP, currR);
				else if (currR >= 100)
					print_to_std_char1(last, whlP, remP, currR);
				else
					_putchar('0' + currR);
				if (j < n && currR <= 9 && nextR <= 9)
					print_to_std_4();
				else if (currR <= 9 || (nextR > 9 && nextR < 100))
				{
					if (j < n)
						print_to_std_3();
				}
				else
				{
					if (j < n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}
/**
 * print_to_std_4 - print to stdout - it is acting as a helper function
 * Return: void
 */
void print_to_std_4(void)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
}

/**
 * print_to_std_3 - print to stdout - it is acting as a helper function
 * Return: void
 */
void print_to_std_3(void)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
}

/**
 * print_to_std_char1 - print to stdout - it is acting as a helper function
 * Return: void
 * @last: last divisor
 * @whlP: whole part
 * @remP: remainder
 * @currR: current value
 */
void print_to_std_char1(int last, int whlP, int remP, int currR)
{
	last = currR % 10;
	whlP = currR / 10;
	remP = whlP % 10;
	whlP = whlP / 10;
	_putchar('0' + whlP);
	_putchar('0' + remP);
	_putchar('0' + last);
}

/**
 * print_to_std_char2 - print to stdout - it is acting as a helper function
 * Return: void
 * @remP: remainder
 * @whlP: whole part
 * @currR: current int value
 */
void print_to_std_char2(int remP, int whlP, int currR)
{
	remP = currR % 10;
	whlP = currR / 10;
	_putchar('0' + whlP);
	_putchar('0' + remP);
}

#include "main.h"
/**
 * times_table - function to print times table
 * Return: void
 */
void times_table(void)
{
	int i, j, currR, nextR, remP, whlP;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			currR = i * j;
			nextR = i * (j + 1);
			if (currR > 9)
			{
				remP = currR % 10;
				whlP = currR / 10;
				_putchar('0' + whlP);
				_putchar('0' + remP);
			}
			else
				_putchar('0' + currR);
			if (j < 9 && currR <= 9 && nextR <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (currR <= 9 || nextR > 9)
			{
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}

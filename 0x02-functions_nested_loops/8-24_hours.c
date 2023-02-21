#include "main.h"
/**
 * jack_bauer - print time starting from 00:00 to 23:59
 * Return: void
 */
void jack_bauer(void)
{
	int i, j, k, reach = 0, c = 0;

	while (c <= 2)
	{
		for (i = 0; i <= 9; i++)
		{
			for (j = 0; j <= 5; j++)
			{
				for (k = 0; k <= 9; k++)
				{
					_putchar('0' + c);
					_putchar('0' + i);
					_putchar(':');
					_putchar('0' + j);
					_putchar('0' + k);
					_putchar('\n');
					if (c == 2 && i == 3 && j == 5 && k == 9)
					{
						reach = 1;
						break;
					}

				}
				if (reach)
					break;
			}
			if (reach)
				break;
		}
		if (reach)
			break;
		c++;
	}
}

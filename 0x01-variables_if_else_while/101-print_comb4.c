#include <stdlib.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * Description: main -entry point
 * Return: (0)
 */
int main(void)
{
	int c;
	int lf;
	int j;
	int k;

	/*linefeed for new line rep*/
	lf = 10;
	for (c = 48; c <= 55; c++)
	{
		for (j = c + 1; j <= 56; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
				putchar(c);
				putchar(j);
				putchar(k);
				if (c == 55 && j == 56 && k == 57)
					continue;
				else
				{
					putchar(44);
					putchar(32);
				}
			}
			
		}
	}
	putchar(lf);
	return (0);
}

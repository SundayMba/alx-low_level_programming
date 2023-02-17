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

	/*linefeed for new line rep*/
	lf = 10;
	for (c = 48; c <= 56; c++)
	{
		for (j = c + 1; j <= 57; j++)
		{
			putchar(c);
			putchar(j);
			if (c == 56 && j == 57)
				continue;
			else
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(lf);
	return (0);
}

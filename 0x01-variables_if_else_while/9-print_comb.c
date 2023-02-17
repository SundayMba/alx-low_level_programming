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
	int comma;
	int space;

	comma = 44;
	space = 32;
	/*linefeed for new line rep*/
	lf = 10;
	for (c = 48; c < 58; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(comma);
			putchar(space);
		}
	}
	putchar(lf);
	return (0);
}

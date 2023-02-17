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
	int h;

	/*linefeed for new line rep*/
	lf = 10;
	for (c = 48; c < 58; c++)
		putchar(c);
	for (h = 97; h <= 102; h++)
		putchar(h);
	putchar(lf);
	return (0);
}

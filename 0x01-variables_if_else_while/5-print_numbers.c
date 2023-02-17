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

	/*linefeed for new line rep*/
	lf = 10;
	/*ascii equivalent for 0-9 = 48-58*/
	for (c = 48; c < 58; c++)
		putchar(c);
	putchar(lf);
	return (0);
}

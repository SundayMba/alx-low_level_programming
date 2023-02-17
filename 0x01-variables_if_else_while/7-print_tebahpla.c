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
	/*small letters in revers order*/
	for (c = 122; c >= 97; c--)
		putchar(c);
	putchar(lf);
	return (0);
}

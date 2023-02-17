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
	/*ascii small leters 97-122*/
	int s;
	/*ascii capital letter 65-90*/
	int c;
	int lf;

	/*linefeed for new line rep*/
	lf = 10;
	for (s = 97; s <= 122; s++)
		putchar(s);
	for (c = 65; c <= 90; c++)
		putchar(c);
	putchar(lf);
	return (0);
}

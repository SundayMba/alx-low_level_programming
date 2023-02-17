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
	/*ascii q=113, e=101*/
	for (c = 97; c < 123; c++)
	{
		if (c == 113 || c == 101)
			continue;
		else
			putchar(c);
	}
	putchar(lf);
	return (0);
}

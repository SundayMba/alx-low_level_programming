#include <stdio.h>
/**
 *
 * Description: main - entry point
 * Return: (0)
 */
int main(void)
{
	int c;
	int lf;
	
	/*ascii equivalent for new line*/
	lf = 10;
	/*using ascii equivalent for small letters*/
	for (c = 97; c < 123; c++)
	{
		putchar(c);
	}
	putchar(lf);
	return (0);
}

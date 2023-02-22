#include <stdio.h>
/**
 * main - entry point
 * Return: (0) success
 */
int main(void)
{
	unsigned long int c, a = 1, b = 2;
	int i;

	printf("%ld, %ld, ", a, b);
	for (i = 1; i <= 48; i++)
	{
		c = a + b;
		if (i != 48)
			printf("%ld, ", c);
		else
			printf("%ld", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}

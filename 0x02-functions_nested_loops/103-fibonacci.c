#include <stdio.h>
/**
 * main - entry point
 * Return: (0)
 */
int main(void)
{
	unsigned long int i, c, a = 1, b = 2, sum = 2;

	for (i = 1; i < 100; i++)
	{
		c = a + b;
		if (c >= 4000000)
			break;
		if (c % 2 == 0)
			sum += c;
		a = b;
		b = c;
	}
	printf("%ld\n", sum);
	return (0);
}

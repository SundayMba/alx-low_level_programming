#include <stdio.h>
/**
 * main - entry point
 * Return: (0) success
 */
int main(void)
{
	unsigned long long int c, a = 1, b = 2;
	int i;

	printf("%llu, %llu, ", a, b);
	for (i = 1; i <= 48; i++)
	{
		c = a + b;
		if (i != 48)
			printf("%llu, ", c);
		else
			printf("%llu", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}

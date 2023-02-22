#include <stdio.h>
/**
 * main - entry point
 * Return: (0)
 */
int main(void)
{
	double c, a = 1, b = 2;
	int i = 1;

	printf("%.0f, %.0f, ", a, b);
	for (i = 1; i <= 96; i++)
	{
		c = a + b;
		if (i != 96)
			printf("%.0f, ", c);
		else
			printf("%.0f", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}

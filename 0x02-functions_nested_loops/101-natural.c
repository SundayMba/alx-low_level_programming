#include <stdio.h>
/**
 * main - entry point
 * Return: sum of the number
 */
int main(void)
{
	int n = 1024;
	int sum = 0;
	int i;

	for (i = 1; i < n; i++)
	{
		if ((3 * i) < n)
		{
			sum += (3 * i);
		}
		if ((5 * i) < n)
		{
			sum += (5 * i);
		}
	}

	printf("%d\n", sum);
	return (0);
}

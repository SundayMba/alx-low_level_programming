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
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	printf("%d\n", sum);
	return (0);
}

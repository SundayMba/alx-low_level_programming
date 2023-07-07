#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert binary to unsigned integers
 * @b: binary to convert
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int bit, i, count = 0, pow = 1, j;
	unsigned int sum = 0, flag = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			count++;
			b++;
			flag = 1;
		}
		else
			return (0);
	}
	/* point backward to a valid character */
	if (flag == 0)
		return (0);
	b--;
	for (i = 0; i < count; i++)
	{
		if (i == 0)
			pow = 1;
		else
		{
			for (j = 0; j < i; j++)
				pow *= 2;
		}
		bit = *b - '0';
		sum += bit * pow;
		b--;
		pow = 1;
	}
	return (sum);
}

#include "main.h"

/**
 * flip_bits - find the number of bit that needs to be fliped
 * @n: number 1
 * @m: number 2
 * Return: flipped times
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result, count = 0;

	xor_result = n ^ m;
	while (xor_result != 0)
	{
		if (xor_result & 1)
			count++;
		xor_result >>= 1;
	}
	return (count);
}

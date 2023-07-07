#include "main.h"

/**
 * get_bit - get bit at a particular position
 * @n: number to get the bit from
 * @index: index position to extract the bit
 * Return: the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask, bit;

	mask = (1UL << index);
	if (!mask)
		return (-1);
	bit = (mask & n) ? 1 : 0;
	return (bit);
}

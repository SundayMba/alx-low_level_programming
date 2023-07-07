#include "main.h"

/**
 * set_bit - set bit at a particular position
 * @n: number to get the bit from
 * @index: index position to set the bit
 * Return: the value of the bit
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	mask = (1UL << index);
	*n = *n | mask;
	return (1);
}

#include "main.h"

/**
 * _sqrt_recursion - find square root using recursion
 * @n: number to find square root
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (cal_sqrt(1, n));
}

/**
 * cal_sqrt - calculate square root starting from 1 til n
 * @start: start position
 * @target: end position
 * Return: square root of n
 */
int cal_sqrt(int start, int target)
{
	if (start * start == target)
		return (start);
	if (start * start > target)
		return (-1);
	return (cal_sqrt(start + 1, target));
}


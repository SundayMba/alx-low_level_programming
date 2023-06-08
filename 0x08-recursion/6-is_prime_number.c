#include "main.h"

/**
 * cal_prime - cal. the prime number
 * @start: start position
 * @n: number
 * Return: 1 - prime or 0- not prime
 */
int cal_prime(int start, int n)
{
	if (start == n)
		return (1);
	if (n % start == 0)
		return (0);
	return (cal_prime(start + 1, n));
}

/**
 * is_prime_number - check if a number is prime number
 * @n: number to check
 * Return: either 0 or 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (cal_prime(2, n));
}

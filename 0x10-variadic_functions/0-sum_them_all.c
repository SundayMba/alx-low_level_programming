#include "variadic_functions.h"

/**
 * sum_them_all - sum all numbers
 * @n: count of numbers
 * @...: variadic argument
 * Return: sum of all number
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int i;

	va_start(ap, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}

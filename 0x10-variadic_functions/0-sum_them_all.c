#include "variadic_functions.h"

/**
 * sum_them_all - sum all numbers
 * @n: count of numbers
 * @...: variadic argument
 * Return: sum of all number
 */
int sum_them_all(const unsigned int n, ...)
{
	/* pointer to the list of argument*/
	va_list ap;
	int sum = 0;
	unsigned int i = 0;

	/* initialize the pointer */
	if (n == 0)
		return (0);
	va_start(ap, n);
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}

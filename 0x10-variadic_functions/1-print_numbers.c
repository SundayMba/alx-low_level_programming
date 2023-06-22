#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print given number
 * @separator: string to print inbetween
 * @n: number of argument
 * @...: variadic argument
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	i = 1;
	while (i <= n)
	{
		printf("%d", va_arg(ap, int));
		if (i != n)
			if (separator != NULL)
				printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ap);
}

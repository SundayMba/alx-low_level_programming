#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print given number
 * @separator: string to print inbetween
 * @n: number of argument
 * @...: variadic argument
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	va_start(ap, n);
	i = 1;
	while (i <= n)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != n)
			if (separator != NULL)
				printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ap);
}

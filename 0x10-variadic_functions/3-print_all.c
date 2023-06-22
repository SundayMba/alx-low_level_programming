#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print all data based on the given format
 * @format: pointer to the list of argument
 * @...: variable list of augument
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int flag = 1, i = 0;
	char *str;

	va_start(ap, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				flag = 0;
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				flag = 0;
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}

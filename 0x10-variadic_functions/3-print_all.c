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
	op_t format_ops[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};
	int i, j, flag = 0;

	va_start(ap, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format_ops[j].id == format[i])
				flag = format_ops[j].handler(ap);
			j++;
		}
		if (format[i + 1] != '\0' && flag == 1)
			printf(", ");
		i++;
		flag = 0;
	}
	printf("\n");
}

/**
 * print_char - print chars
 * @list: variable list of argument
 *
 * Return: number rep. flag
 */
int print_char(va_list list)
{
	printf("%c", va_arg(list, int));
	return (1);
}

/**
 * print_int - print int
 * @list: list of argument
 * Return: flag
 */
int print_int(va_list list)
{
	printf("%d", va_arg(list, int));
	return (1);
}

/**
 * print_float - print float
 * @list: list of argument
 * Return: flag
 */
int print_float(va_list list)
{
	printf("%f", va_arg(list, double));
	return (1);
}

/**
 * print_string - print string
 * @list: list of argument
 * Return: flag
 */
int print_string(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
	return (1);
}

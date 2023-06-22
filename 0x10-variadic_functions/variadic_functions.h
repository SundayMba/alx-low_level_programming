#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct op - structured memory to store data
 * 
 * @id: identifiers or signals
 * @handler: function handlers
 */

struct op
{
	char id;
	int (*handler)(va_list);
};
typedef struct op op_t;
int print_int(va_list);
int print_float(va_list);
int print_char(va_list);
int print_string(va_list);
#endif

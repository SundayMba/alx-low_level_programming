#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: name to print
 * @f: function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
	/*f(name);*/
}

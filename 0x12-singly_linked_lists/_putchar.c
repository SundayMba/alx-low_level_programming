#include <unistd.h>

/**
 * putchar - write a character to the standard output
 * @c: character to write
 * Return: number of characters written
 */

int putchar(char c)
{
	return (write(1, &c, 1));
}

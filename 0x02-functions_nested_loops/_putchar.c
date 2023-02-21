#include <unistd.h>

/**
 * _putchar - function for printing character to the screen.
 * Return: nbyte
 * c - character parameter
 */
int _putchar(char c)
{
	char nbyte;

	nbyte = write(1, &c, 1);
	return (nbyte);
}

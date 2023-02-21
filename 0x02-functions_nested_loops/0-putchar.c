#include "main.h"
/**
 * main - entry point
 * Return: (0)
 */
int main(void)
{
	char *word = "_putchar\n";
	char c;

	for (c = *word; c != '\0'; c = *(++word))
		_putchar(c);
	return (0);
}

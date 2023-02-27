#include "main.h"

/**
 * puts_half - count strong length
 * @s: a pointer to a string memory location
 * Return: void
 */
void puts_half(char *s)
{
	int count = 0, i;
	char *ptr;

	for (ptr = s; *ptr != '\0'; ptr++)
		count++;
	if (count % 2 != 0)
		for (i = (count / 2) - 1; i < count; i++)
			_putchar(s[i]);
	else
		for (i = count / 2; i < count; i++)
			_putchar(s[i]);
	_putchar('\n');
}

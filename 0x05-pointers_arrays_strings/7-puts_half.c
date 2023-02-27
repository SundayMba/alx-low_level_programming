#include "main.h"

/**
 * puts_half - count strong length
 * @s: a pointer to a string memory location
 * Return: void
 */
void puts_half(char *s)
{
	int count = 0, i;
	/*check if pointer is valid*/
	if (*s)
	{
		char val;

		val = *(s + count);
		while (val != '\0')
		{
			count++;
			val = *(s + count);
		}
	}
	if (count % 2 != 0)
		for (i = (count - 1) / 2; i < count; i++)
			_putchar(s[i]);
	else
		for (i = count / 2; i < count; i++)
			_putchar(s[i]);
	_putchar('\n');
}

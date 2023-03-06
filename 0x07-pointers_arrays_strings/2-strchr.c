#include <stddef.h>
/**
 * _strchr - a function that locates a character in a string.
 * @s: address of the first character of the buffer
 * @c: character to locate
 * Return: pointer to the character
 */

char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}

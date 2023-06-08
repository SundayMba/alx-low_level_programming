#include "main.h"

/**
 * is_palindrome - check if a string is palindrome
 * @s: string to check against
 * Return: either 1 or 0
 */
int is_palindrome(char *s)
{
	/*calculate for a string length*/
	int len;

	len = _strlen(s);
	return (pal_checker(s, 0, len - 1));
}

/**
 * pal_checker - check for palindrome word
 * @word: word to check
 * @start: start position
 * @end: end position
 * Return: either 1 or 0
 */

int pal_checker(char *word, int start, int end)
{
	if (word[start] == word[end])
		if (start > _strlen(word) / 2)
			return (1);
	if (word[start] != word[end])
		return (0);
	return (pal_checker(word, start + 1, end - 1));
}

/**
 * _strlen - string length
 * @s: string
 * Return: string length
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

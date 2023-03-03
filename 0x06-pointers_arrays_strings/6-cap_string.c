#include "main.h"

/**
 * cap_string - capitalize string first character
 * @str: string to capitalize
 * Return: a pointer to the capitalize string
 */

char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;
		if (seperator(str[index - 1]) == 10)
			str[index] -= 32;
		index++;
	}
	return (str);
}

/**
 * seperator - list seperators to check c against
 * @c: character to check against
 * Return: integer rep. true (1) or false (0)
 */

int seperator(char c)
{
	char sep1[] = {'{', '}', ' ', '\t', '\n', '(', '.', '\0'};
	char sep2[] = {',', ';', '!', '?', '"', ')', '\0'};
	int i;

	for (i = 0; sep1[i] != '\0'; i++)
	{
		if (sep1[i] == c || sep2[i] == c)
			return (10);
	}
	return (0);
}

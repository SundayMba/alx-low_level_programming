#include "main.h"

/**
 * cap_string - capitalize string first character
 * @str: string to capitalize
 * Return: a pointer to the capitalize string
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else
				continue;
		}
		else
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				if (seperator(str[i - 1]) == 10)
					str[i] -= 32;
				else
					continue;
			}
			else
				continue;
		}
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
	char sep1[] = {'{', '}', ' ', '\t', '\n', '(', '\0'};
	char sep2[] = {',', ';', '!', '?', '"', ')', '\0'};
	int i;

	for (i = 0; sep1[i] != '\0'; i++)
	{
		if (sep1[i] == c || sep2[i] == c)
			return (10);
	}
	return (0);
}

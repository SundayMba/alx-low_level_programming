#include <stdlib.h>

/**
 * _strdup - duplicate given string
 * @str: string to duplicate
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *ptr;
	char *str_count = str;
	int i, count;

	i = 0;
	count = 0;
	if (str == NULL)
		return (NULL);
	while (*str_count++)
		count++;
	ptr = malloc(sizeof(char) * count + 1);
	if (ptr == NULL)
		return (NULL);
	while (*str)
	{
		ptr[i] = *str;
		str++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

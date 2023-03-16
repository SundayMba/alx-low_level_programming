#include <stdlib.h>

/**
 * _strdup - duplicate a string
 * @str: string to duplicate
 * Return: a pointer to the newly allocated memory that contains the dulicate
 */

char *_strdup(char *str)
{
	char *fixedPtr;
	char *increPtr;
	int len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	fixedPtr = malloc(len + 1);
	increPtr = fixedPtr;
	if (increPtr == NULL)
		return (NULL);
	while (*str)
		*(increPtr++) = *(str++);
	*increPtr = '\0';
	return (fixedPtr);
}

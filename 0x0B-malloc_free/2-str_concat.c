#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenate a string
 * @s1: first string
 * @s2: second string
 * Return: a pointer
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	char *ptr;

	if (s1 == NULL && s2 != NULL)
	{
		return (set_mem(len1, len2, s2, NULL));
	}
	else if (s2 == NULL && s1 != NULL)
	{
		return (set_mem(len2, len1, s1, NULL));
	}
	else if (s1 == NULL && s2 == NULL)
	{
		len1++;
		len2++;
		ptr = malloc(len1 + len2 + 1);
		if (ptr == NULL)
			return (NULL);
		else
			return (ptr);
	}
	else
	{
		return (set_mem(len1, len2, s1, s2));
	}
}

/**
 * set_mem - compute some memory
 * @s1: string 1
 * @s2: string 2
 * @len1: length 1
 * @len2: length 2
 * Return: pointer
 */
char *set_mem(int len1, int len2, char *s1, char *s2)
{
	char *ptr1;
	char *ptr2;

	if (s2 == NULL)
	{
		len1++;
		while (s1[len2])
			len2++;
		ptr2 = malloc(len1 + len2 + 1);
		if (ptr2 == NULL)
			return (NULL);
		ptr1 = ptr2;
		while (*s1)
			*ptr2++ = *s1++;
		*ptr2 = '\0';
	}
	else
	{
		while (s1[len1])
			len1++;
		while (s2[len2])
			len2++;
		ptr1 = malloc(len1 + len2 + 1);
		ptr2 = ptr1;
		while (*s1)
			/*manipulate the memory before incrementing the pointer*/
			*(ptr2++) = *(s1++);
		while (*s2)
			*(ptr2++) = *(s2++);
		*ptr2 = '\0';
	}
	return (ptr1);
}

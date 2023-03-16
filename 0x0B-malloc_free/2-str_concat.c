#include <stdlib.h>

/**
 * str_concat - concatenate a string
 * @s1: first string
 * @s2: second string
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	char *ptr1;
	char *ptr2;

	if (s1 == NULL)
		len1++;
	if (s2 == NULL)
		len2++;
	if (s1 != NULL && s2 != NULL)
	{
		while (s1[len1])
			len1++;
		while (s2[len2])
			len2++;
	}
	ptr1 = malloc(len1 + len2 + 1);
	ptr2 = ptr1;
	while (*s1)
		/*manipulate the memory before incrementing the pointer*/
		*(ptr2++) = *(s1++);
	while (*s2)
		*(ptr2++) = *(s2++);
	*ptr2 = '\0';
	return (ptr1);
}

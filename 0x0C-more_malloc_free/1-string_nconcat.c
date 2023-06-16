#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of character
 * Return: pointer to char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr, *s1_dup = s1, *s2_dup = s2;
	unsigned int i, j, m = 0, k = 0, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*s1_dup++)
		m++;
	while (*s2_dup++)
		k++;
	if (n >= k)
		n = k;
	size = m + n;
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < m; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
		ptr[j + i] = s2[j];
	ptr[j + i] = '\0';
	return (ptr);
}


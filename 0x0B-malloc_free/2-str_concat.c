#include <stdlib.h>
#include "main.h"

/**
 * str_concat - joins two string together
 * @s1: string one
 * @s2: string two
 * Return: pointer to the concat string
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr, *s2_count = s2, *s1_count = s1;
	int count = 0, s1_flag = 0, s2_flag = 0;

	if (s1 == NULL && s2 != NULL)
	{
		s2_count = s2;
		s2_flag = 1;
		while (*s2_count++)
			count++;
	}
	else if (s1 != NULL && s2 == NULL)
	{
		s1_count = s1;
		s1_flag = 1;
		while (*s1_count++)
			count++;
	}
	else if (s1 == NULL && s2 == NULL)
	{
		ptr = malloc(sizeof(char));
		ptr[0] = '\0';
		return (ptr);
	}
	else
	{
		while (*s1_count++)
			count++;
		while (*s2_count++)
			count++;
	}
	return (mem_allocate(count, s1_flag, s2_flag, s1, s2));
}

/**
 * mem_allocate - allocate memory
 * @count: count of the letters
 * @s1_flag: signify when s1 contains data
 * @s2_flag: signify when s2 contains data
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to allocated memory
 */
char *mem_allocate(int count, int s1_flag, int s2_flag, char *s1, char *s2)
{
	char *ptr;
	int i = 0;

	ptr = malloc(sizeof(char) * count + 1);
	if (ptr == NULL)
		return (NULL);
	if (s1_flag)
	{
		for (i = 0; i < count; i++)
			ptr[i] = s1[i];
	}
	else if (s2_flag)
	{
		for (i = 0; i < count; i++)
			ptr[i] = s2[i];
	}
	else
	{
		while (s1[i])
		{
			ptr[i] = s1[i];
			i++;
		}
		count = i;
		i = 0;
		while (s2[i])
		{
			ptr[count] = s2[i];
			i++;
			count++;
		}
	}
	ptr[count] = '\0';
	return (ptr);
}

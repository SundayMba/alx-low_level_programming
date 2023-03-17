#include <stdlib.h>

/**
 * argstostr - concatenate a string
 * @ac: argument count
 * @av: argument vector
 * Return: a pointer to char
 */
char *argstostr(int ac, char **av)
{
	int count = 0;
	char  *ptr;
	int i = 0, j;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i != ac)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			count++;
		count++;
		i++;
	}
	ptr = malloc(sizeof(char) * count + 1);
	if (ptr == NULL)
		return (NULL);
	count = 0;
	i = 0;
	while (i != ac)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[count] = av[i][j];
			count++;
		}
		ptr[count] = '\n';
		i++;
		count++;
	}
	ptr[count] = '\0';
	return (ptr);
}

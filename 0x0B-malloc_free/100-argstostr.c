#include <stdlib.h>

/**
 * argstostr - convert args to string
 * @ac: args count
 * @av: args vector
 * Return: a pointer to a char string rep. new memory
 */

char *argstostr(int ac, char **av)
{
	int ac1 = ac, i, j, count = 0;
	char *argItem, *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (ac1--)
	{
		argItem = av[i];
		while (*argItem++)
			count++;
		i++;
	}
	ptr = malloc(sizeof(char) * count + 1);
	if (ptr == NULL)
		return (NULL);
	count = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			ptr[count++] = av[i][j];
		ptr[count++] = '\n';
	}
	ptr[count] = '\0';
	return (ptr);
}

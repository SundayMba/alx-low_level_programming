/**
 * leet - encrypt a message
 * @str: string to encrypt
 * Return: a pointer to the ecrypted string
 */

char *leet(char *str)
{
	char letters[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == letters[j] || str[i] - 32 == letters[j])
				str[i] = j + '0';
		}
	}
	return (str);
}

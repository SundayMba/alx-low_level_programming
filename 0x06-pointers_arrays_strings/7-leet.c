/**
 * leet - encrypt a message
 * @str = string to encrypt
 * Return: a pointer to the ecrypted string
 */

char *leet(char *str)
{
	char letter1[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char letter2[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char numbers[] = {'4', '3', '0', '7', '1', '\0'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letter1[j] != '\0' && letter2[j] != '\0'; j++)
		{
			if (str[i] == letter1[j] || str[i] == letter2[j])
				str[i] = numbers[j];
			else
				continue;
		}
	}
	return (str);
}

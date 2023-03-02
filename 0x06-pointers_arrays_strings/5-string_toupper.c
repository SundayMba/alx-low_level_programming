/**
 * string_toupper - change lowercase to uppercase
 * @str: strings to change
 * Return: pointer to the new string
 */

char *string_toupper(char *str)
{
	int i, diff;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			diff = str[i] - 'a';
			str[i] = 'A' + diff;
		}
	}
	return (str);
}

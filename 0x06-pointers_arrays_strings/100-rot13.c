/**
 * rot13 - rotate a letter by adding the 13 letter after it to it
 * @str: letter to rotate
 * Return: a pointer to the memory that stores the rotated massage
 */
char *rot13(char *str)
{
	char *result = str;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = ((str[i] - 'a') + 13) % 26 + 'a';
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = ((str[i] - 'A') + 13) % 26 + 'A';
		}
	}
	return (result);
}

/**
 * _strspn -  a function that gets the length of a prefix substring.
 * @s: string data
 * @accept: character set to match against
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{


	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			match = 0;
			if (*s == accept[i])
			{
				count++;
				match = 1;
				break;
			}
		}
		if (!match)
			break;
		s++;
	}
	return (count);
}

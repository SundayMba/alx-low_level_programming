/**
 * _memset - set a buffer with a byte for a given n byte location
 * @s: address of the first character of the buffer
 * @b: byte data to store in the buffer
 * @n: number of byte to use
 * Return: pointer to the buffer
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (ptr);
}

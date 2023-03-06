/**
 * _memcpy - copies a byte from src to dest
 * @dest: destination
 * @src: source
 * @n: number of byte to copy
 * Return: a pointer to the destination memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ptr = dest;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (ptr);
}

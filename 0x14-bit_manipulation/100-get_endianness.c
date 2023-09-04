#include "main.h"

/**
 * get_endianness - retrieve the byte order of the system
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned long int num;
	char *ptr;

	num = 1;
	ptr = (char *)&num;
	return ((int)*ptr);
}

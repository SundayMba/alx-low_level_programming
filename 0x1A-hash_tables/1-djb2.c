#include "hash_tables.h"

/**
 * hash_djb2 - hash or encodes a key using ddjb2 algorithm
 * @str: incoming key to hash
 * Return: integer index rep. the hashed key after computation
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}

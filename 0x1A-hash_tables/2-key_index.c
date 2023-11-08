#include "hash_tables.h"

/**
 * key_index - generate a key index of the hash node within the bounds of size
 * @key: key of the object
 * @size: size of the array of the hash table items
 * Return: integer rep. of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}

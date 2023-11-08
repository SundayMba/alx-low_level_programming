#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: key
 * @value: value
 * Return: 1 - success, 0 - failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	const char *new_value;
	unsigned long int index;
	hash_node_t *node, *head, *tmp;

	if (ht == NULL || !key)
		return (0);
	new_value = value == NULL ? "" : value;
	node = create_hash_node(key, new_value);
	if (node == NULL)
		return (0);
	/* create an array index using the hash_djb2 algorithm */
	index = key_index((const unsigned char *)key, ht->size);
	/* check if the node already exit in the table */
	head = ht->array[index];
	if (head == NULL)
	{
		ht->array[index] = node;
		return (1);
	}
	tmp = head;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			strcpy(tmp->value, value);
			return (1);
		}
		tmp = tmp->next;
	}
	node->next = head;
	ht->array[index] = node;
	return (1);
}

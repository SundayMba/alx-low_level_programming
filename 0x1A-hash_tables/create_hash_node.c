#include "hash_tables.h"

/**
 * create_hash_node - create a hash node
 * @key: key of the node
 * @value: value of the node
 * Return: key/value pair structued memory
 */

hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	return (node);
}

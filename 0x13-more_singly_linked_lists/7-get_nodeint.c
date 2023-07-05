#include "lists.h"

/**
 * get_nodeint_at_index - get a node in a linked list given an index
 * @head: pointer to the head node
 * @index: index of the node
 * Return: node at a particular index or NULL if failed
 */

istint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	for (i = 0; i <= index && head != NULL; i++)
	{


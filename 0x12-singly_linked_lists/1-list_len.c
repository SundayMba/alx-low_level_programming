#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - length of a linked list
 * @h: pointer to the head node
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - print linked list of data
 * @h: pointer to the head node
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes;

	if (h == NULL)
		return (0);
	nodes = 0;
	while (h)
	{
		if (!h->str)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}

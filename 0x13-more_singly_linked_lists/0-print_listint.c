#include "lists.h"

/**
 * print_listint - print a linked list of integers
 * @h: pointer to the head node
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	for (h = h; h != NULL; h = h->next)
	{
		node++;
		printf("%d\n", h->n);
	}
	return (node);
}

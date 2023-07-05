#include "lists.h"

/**
 * listint_len - print length of a linked list
 * @h: pointer to the head node
 *
 * Return: number of element in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	for (h = h; h != NULL; h = h->next)
		node++;
	return (node);
}

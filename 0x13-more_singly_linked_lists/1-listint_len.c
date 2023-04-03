#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * listint_len - returns the number of elements in a linked
 * @h: head node
 * Return: length of a node
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

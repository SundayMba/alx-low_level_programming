#include <stddef.h>
#include "lists.h"

/**
 * list_len - list element in a linked list
 * @h: head of node
 * Return: size of element in a linked list
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		/*Get the next node*/
		h = h->next;
	}
	return (count);
}

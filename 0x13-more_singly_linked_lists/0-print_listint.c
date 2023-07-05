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
	const listint_t *tmp;

	for (tmp = h; tmp != NULL; tmp = tmp->next)
	{
		node++;
		printf("%d\n", tmp->n);
	}
	return (node);
}

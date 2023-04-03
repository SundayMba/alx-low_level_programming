#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - get node at nth position
 * @head: pointer to head node
 * @index: position to get the node
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 1;
	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	while (head != NULL && i <= index)
	{
		head = head->next;
		i++;
	}
	return (head);
}

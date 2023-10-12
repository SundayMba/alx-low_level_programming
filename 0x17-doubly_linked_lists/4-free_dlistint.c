#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list of int
 * @head: pointer to the head node
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

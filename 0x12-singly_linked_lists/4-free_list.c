#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list of linked list
 * @head: pointer to the head node
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (!head)
		return;
	temp = head;
	while (head->next != NULL)
	{
		temp = head->next;
		if (head->str)
			free(head->str);
		free(head);
		head = temp;
	}
	if (head->str)
		free(head->str);
	free(head);
}

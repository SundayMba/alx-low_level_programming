#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free a linked list
 * @head: starting point of a link list
 * Return: void
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}

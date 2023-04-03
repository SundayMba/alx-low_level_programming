#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a linked list of int
 * Return: void
 * @head: head node
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}

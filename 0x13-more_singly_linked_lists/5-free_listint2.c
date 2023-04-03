#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a linked list of int
 * Return: void
 * @head: head node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = (*head);
	listint_t *temp1 = *head;

	*head = NULL;
	while (temp != NULL)
	{
		temp1 = temp1->next;
		free(temp);
		temp = temp1;
	}
}

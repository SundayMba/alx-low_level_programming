#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - insert node a index position
 * @head: pointer to pointer to head node
 * @index: index
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp1, *temp = NULL;
	unsigned int i = 1;

	temp1 = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp1);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		temp1 = temp1->next;
	}
	temp = temp1->next;
	temp1->next = temp->next;
	free(temp);
	return (1);
}

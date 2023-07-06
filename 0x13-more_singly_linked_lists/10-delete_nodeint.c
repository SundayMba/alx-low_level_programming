#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at given index
 * @head: head pointer
 * @index: index of node to delete
 * Return: integer
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp = *head, *tmp1, *tmp2;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		return (1);
	}
	for (i = 0; i < index && tmp != NULL; i++)
	{
		if (i + 1 == index)
		{
			tmp1 = tmp->next;
			tmp2 = tmp1->next;
			tmp->next = tmp2;
			free(tmp1);
			return (1);
		}
		tmp = tmp->next;
	}
	return (-1);
}

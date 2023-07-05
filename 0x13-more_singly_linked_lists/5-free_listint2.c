#include "lists.h"

/**
 * free_listint2 - frees a list of integers linked together
 * @head: pointer to structured node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *currentNode;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		currentNode = (*head)->next;
		free(*head);
		*head = currentNode;
	}
	*head = NULL;
}

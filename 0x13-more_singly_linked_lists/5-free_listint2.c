#include "lists.h"

/**
 * free_listint2 - frees a list of integers linked together
 * @head: pointer to structured node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *currentNode = *head;

	if (*head == NULL || head == NULL)
		return;
	while (currentNode->next != NULL)
	{
		currentNode = (*head)->next;
		free(*head);
		*head = currentNode;
	}
	*head = NULL;
	free(currentNode);
}

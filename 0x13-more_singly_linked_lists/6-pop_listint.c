#include "lists.h"

/**
 * pop_listint - remove a node from a linked list of nodes
 * @head: pointer to pointer to head node
 * Return: the integer data
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *nextNode;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	nextNode = (*head)->next;
	free(*head);
	*head = nextNode;
	return (n);
}

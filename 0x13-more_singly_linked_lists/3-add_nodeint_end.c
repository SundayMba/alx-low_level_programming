#include "lists.h"

/**
 * add_nodeint_end - add node to the end of a linked list
 * @head: pointer to pointer to head of node
 * @n: int data part
 * Return: address of the newly created node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *currentNode = *head;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
		*head = new;
	else
	{
		while (currentNode->next != NULL)
			currentNode = currentNode->next;
		currentNode->next = new;
	}
	return (new);
}

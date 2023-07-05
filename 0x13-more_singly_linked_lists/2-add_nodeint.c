#include "lists.h"

/**
 * add_nodeint - add node to the beginning of a linked list
 * @head: pointer to pointer to head node
 * @n: data part of the node
 * Return: address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning
 * @head: pointer to pointer to head node
 * @n: data to build the node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/*pointer to the head node*/
	listint_t *new = NULL;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	/*handover head pointer to the newly created node*/
	new->next = (*head);
	*head = new;
	return (new);
}

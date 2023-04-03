#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert node a index position
 * @head: pointer to pointer to head node
 * @idx: index
 * @n: int number
 * Return: node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp1;
	unsigned int i = 1;
	listint_t *new = NULL;

	temp1 = NULL;
	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	temp1 = *head;
	for (i = 0; i < idx - 1; i++)
	{
		temp1 = temp1->next;
	}
	new->next = temp1->next;
	temp1->next = new;
	return (new);
}

#include "lists.h"

/**
 * sum_listint - sum list of linked integters
 * @head: pointer to linked head
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

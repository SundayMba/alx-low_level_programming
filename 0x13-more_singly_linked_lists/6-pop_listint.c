#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to pointer to head node
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	int data;
	/*temp. pointer to the head node*/
	listint_t *temp = *head;

	if (*head == NULL)
		return (0);
	/*redirect the pointer to point to next node*/
	*head = temp->next;
	data = temp->n;
	/*free the head node*/
	free(temp);
	return (data);
}

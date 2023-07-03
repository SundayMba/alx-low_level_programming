#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - add node at the end of a linked list
 * @head: pointer to a pointer that point to head
 * @str: new string
 * Return: the address of the new element, or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail, *head_p = *head;
	int count;

	count = 0;
	tail = malloc(sizeof(list_t));
	if (!tail)
		return (NULL);
	/* building the new memory */
	tail->str = strdup(str);
	if (tail->str == NULL)
	{
		free(tail);
		return (NULL);
	}
	while (str[count])
		count++;
	tail->len = count;
	if (*head == NULL)
	{
		tail->next = *head;/* pointer handover */
		*head = tail;
	}
	else
	{
		while (head_p->next != NULL)
			head_p = head_p->next;
		tail->next = head_p->next; /* handover */
		head_p->next = tail;
	}
	return (tail);
}

#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - add node to the beginning of a linked list
 * @head: pointer to a pointer that point to head
 * @str: new string
 * Return: the address of the new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int count;

	count = 0;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[count])
		count++;
	new->len = count;
	new->next = *head;/* pointer handover */
	*head = new;
	return (new);
}

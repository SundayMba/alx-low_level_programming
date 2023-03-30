#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - add node to the begining of a linked list
 * @head: address of the head node
 * @str: string char
 * Return: Address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	int str_len = 0;

	while (str[str_len])
		str_len++;
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = str_len;
	new->next = *head;
	*head = new;
	return (*head);

}

#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - add node to the end of a linked list
 * @head: address of the head node
 * @str: string char
 * Return: Address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/*creating a new node*/
	list_t *newNode = malloc(sizeof(list_t));
	int str_len = 0;
	list_t *tmpNode;

	while (str[str_len])
		str_len++;
	if (newNode == NULL)
		return (NULL);
	/*node creation*/
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = str_len;
	newNode->next = NULL;
	/*node traversal*/
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	tmpNode = *head;
	while (tmpNode->next != NULL)
		tmpNode = tmpNode->next;
	tmpNode->next = newNode;
	return (newNode);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    hash_node_t *head;
    unsigned long int i;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "betty", "hello");
    hash_table_set(ht, "hetairas", "collide 1");
    hash_table_set(ht, "mentioner", "collide 2");
    hash_table_set(ht, "heliotropes", "collide 3");
    hash_table_set(ht, "depravement", "collide 4");
    hash_table_set(ht, "serafins", "collide 5");
    hash_table_set(ht, "neurospora", "cool");
    for (i = 0; i < ht->size; i++)
    {
	    head = ht->array[i];
	    while (head)
	    {
		    printf("index: [%lu] - key: %s, value: %s\n", i, head->key, head->value);
		    head = head->next;
	    }
    }
    return (EXIT_SUCCESS);
}

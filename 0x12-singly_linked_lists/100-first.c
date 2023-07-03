#include "lists.h"
#include <stdio.h>

/**
 * main_b - print informaton before executing main function
 * Return: void
 */

void __attribute__((constructor)) main_b()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

#include <stdio.h>

/**
 * printInfo - print information before main
 * Return: void
 */
void printInfo(void) __attribute__((constructor));

/**
 * printInfo - actual implementation
 */
void printInfo(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my backs!\n");
}

#include "main.h"

/**
 * printHeader - print header content of an elf file
 * @hdr: elf header structure
 * Return: void
 */

void printHeader(const Elf64_Ehdr *hdr)
{
	/* print the magic field */
	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%x ", hdr->e_ident[i]);
	printf("\n");
}


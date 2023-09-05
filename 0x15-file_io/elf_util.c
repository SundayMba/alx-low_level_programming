#include "main.h"

/**
 * printHeader - print header content of an elf file
 * @hdr: elf header structure
 * Return: void
 */

void printHeader(const Elf64_Ehdr *hdr)
{
	int i;

	/* print the magic field */
	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", hdr->e_ident[i]);
	printf("\n");
}


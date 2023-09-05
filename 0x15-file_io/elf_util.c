#include "main.h"

/**
 * printHeader - print header content of an elf file
 * @hdr: elf header structure
 * Return: void
 */

void printHeader(const Elf64_Ehdr *hdr)
{
	int i;

	printf("ELF Header:\n");
	/* print the magic field */
	printf("  Magic:  ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", hdr->e_ident[i]);
		if (i != EI_NIDENT - 1)
			printf(" ");
		else
			printf("\n");
	}
	/* class of file */
	printClass(hdr);
	/* check for data */
	printData(hdr);
	/* print version */
	printVersion(hdr);
	/* print OS/ABI */
	printOSABI(hdr);
	/* printABIVERSION */
	printABI(hdr);
	/* print type */
	printType(hdr);
	/* print Entry Point */
	printEntryPointAddress(hdr);
}

/**
 * printClass - print Class section
 * @hdr: header
 * Return: void
 */

void printClass(const Elf64_Ehdr *hdr)
{
	printf("  Class:                            ");
	switch (hdr->e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown %x>\n", hdr->e_ident[EI_CLASS]);
			break;
	}
}


/**
 * printData - print data section
 * @hdr: header
 * Return: void
 */

void printData(const Elf64_Ehdr *hdr)
{
	printf("  Data:                             ");
	switch (hdr->e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		case ELFDATANONE:
			printf("none\n");
			break;
		default:
			printf("<unknown %x>\n", hdr->e_ident[EI_DATA]);
			break;
	}
}

/**
 * printVersion - print version section
 * @hdr: header
 * Return: void
 */

void printVersion(const Elf64_Ehdr *hdr)
{
	printf("  Version:                          %d", hdr->e_ident[EI_VERSION]);
	switch (hdr->e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf(" none\n");
			break;
	}
}

/**
 * printOSABI - print OSABI section
 * @hdr: header
 * Return: void
 */

void printOSABI(const Elf64_Ehdr *hdr)
{
	printf("  OS/ABI                            ");
	switch (hdr->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("unknown %x>\n", hdr->e_ident[EI_OSABI]);
			break;
	}
}

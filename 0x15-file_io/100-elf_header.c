#include <stdio.h>
#include <elf.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

void printHeader(const Elf64_Ehdr *hdr);
void printEntryPointAddress(const Elf64_Ehdr *hdr);
void printVersion(const Elf64_Ehdr *hdr);
void printData(const Elf64_Ehdr *hdr);
void printClass(const Elf64_Ehdr *hdr);
void printOSABI(const Elf64_Ehdr *hdr);
void printType(const Elf64_Ehdr *hdr);
void printABI(const Elf64_Ehdr *hdr);

/**
 * main - entry point of the program
 * @ac: argument count
 * @av: argument vector
 * Return: 98 on error or 0 on success.
 */

int main(int ac, char **av)
{
	Elf64_Ehdr hdr;
	int fd, byteRead;

	/* check for valid the input argument */
	if (ac != 2)
	{
		printf("Usage: %s filename\n", av[0]);
		return (0);
	}
	/* open the elf file */
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "failed to open file %s\n", av[1]);
		exit(98);
	}
	/* read from the file */
	byteRead = read(fd, &hdr, sizeof(Elf64_Ehdr));
	if (byteRead == -1)
	{
		close(fd);
		dprintf(STDERR_FILENO, "failed to read from file %s\n", av[1]);
		exit(98);
	}
	/* check if valid elf file */
	if (memcmp(hdr.e_ident, ELFMAG, SELFMAG) != 0)
	{
		dprintf(STDERR_FILENO, "%s: Not a valid elf file\n", av[1]);
		return (98);
	}
	printHeader(&hdr);
	close(fd);
	return (0);
}

/**
 * printType - print type section
 * @hdr: header
 * Return: void
 */

void printType(const Elf64_Ehdr *hdr)
{
	printf("  Type:                              ");
	switch (hdr->e_type)
	{
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared Object File)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("unknown: %x>\n", hdr->e_type);
			break;
	}
}

/**
 * printEntryPointAddress - print the entry point address
 * @hdr: header
 * Return: void
 */

void printEntryPointAddress(const Elf64_Ehdr *hdr)
{
	printf("  Entry point address:               ");
	printf("0x%lx\n", hdr->e_entry);
}

/**
 * printABI - print ABI
 * @hdr: header
 * Return: void
 */

void printABI(const Elf64_Ehdr *hdr)
{
	printf("  ABI:                               ");
	printf("%x\n", hdr->e_ident[EI_ABIVERSION]);
}

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
	printf("  Magic:   ");
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
	printf("  Class:                             ");
	switch (hdr->e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
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
	printf("  Data:                              ");
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
	printf("  Version:                           %d", hdr->e_ident[EI_VERSION]);
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
	printf("  OS/ABI                             ");
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

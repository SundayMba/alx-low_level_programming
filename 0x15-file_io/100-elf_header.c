#include "main.h"

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
	printf(" Type:                          ");
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
	print(" Entry point address: 0x%lx\n", hdr->e_entry);
}

/**
 * printABI - print ABI
 * @hdr: header
 * Return: void
 */

void printABI(const Elf64_Ehdr *hdr)
{
	print(" ABI:                         %x", hdr->e_ident[EI_ABIVERSION]);
}

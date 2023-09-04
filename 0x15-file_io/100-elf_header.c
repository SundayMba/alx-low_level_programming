#include <stdio.h>

/**
 * main - entry point
 * @argc: count of argument from command line
 * @argv: array of strings from the command line
 * Return: integer
 */

int main(int argc, char *argv[])
{
	/*header data structure variable declaration*/
	Elf64_Ehdr hdr;
	int fd;

	/* check for passed in argument */
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	/* open the elf file for reading */
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: can't open the file %s\n", argv[1]);
		exit(98);
	}
	/* making sure to start from the offset of 0 in the file */
	lseek(fd, 0, SEEK_CUR);
	/* reading from the elf file */
	bytRd = read(fd, &hdr, sizeof(Elf64_Ehdr));
	if (bytRd == -1)
	{
		fprintf(stderr, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	/* checking for valid elf file using sile size and magic number */
	if (sizeof(Elf64_Ehdr) != bytRd)
		if (memcmp(hdr->e_ident, ELFMAG, SELFMAG) != 0)
		{
			fprint(stderr, "Error: %s not an elf file\n", argv[1]);
			exit(98);
		}
	printHeader(&hdr);
	close(fd);
	return (0);
}

/**
 * printfHeader - print the header of an elf file
 * @hdr: pointer to the actual memory location
 * Return: void
 */

void printHeader(const Elf64_Ehdr *hdr)
{
	printElfMagic(hdr);
	elfValue = getElfclass(hdr);
	printf("Class: %s\n", elfValue);
	elfValue = getElfData(hdr);
	printf("Data: %s\n", elfValue);
	elfValue = getElfVersion(hdr);
	printf("Version: %s\n", elfValue);
	elfValue = getElfOSABI(hdr);
	printf("OS/ABI: %s\n", elfValue);
	elfValue = getElfABIVersion(hdr);
	printf("ABI Version: %s\n", elfValue);
	elfValue = getElfType(hdr);
	printf("Type: %s\n", elfValue);
	elfValue = getEntryPointAddr(hdr);
	printf("Entry point address: %s\n", elfValue);
}

printfElfMagic

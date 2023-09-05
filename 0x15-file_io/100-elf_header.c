#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

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
		return (98);
	}
	/* read from the file */
	byteRead = read(fd, &hdr, sizeof(Elf64_Ehdr));
	if (byteRead == -1)
	{
		dprintf(STDERR_FILENO, "failed to read from file %s\n", av[1]);
		return (98);
	}
	/* check if valid elf file */
	if (memcmp(hdr.e_indent, ELFMAG, SELFMAG) != 0)
	{
		dprintf(STDERR_FILENO, "%s: Not a valid elf file\n", av[1]);
		return (98);
	}
	printHeader(&hdr);
	return (0);
}

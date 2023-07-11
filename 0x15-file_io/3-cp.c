#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @ac: argument count
 * @av: argument vector
 * Return: number representing the execution status
 */

int main(int ac, char **av)
{
	int fd1, fd2, status;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* only create the file and returns error if already exist */
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_EXCL, 0664);
	if (fd2 == -1)
	{
		fd2 = open(av[2], O_WRONLY | O_TRUNC);
		if (fd2 == -1)
			return (writeError(av[2]));
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
	{
		if (close(fd2) == -1)
		{
			return (closeError(fd2));
		}
		return (readError(av[1]));
	}
	status = copyContent(&fd1, &fd2);
	if (status == -1)
		return (readError(av[1]));
	else if (status == -2)
		return (writeError(av[2]));
	if (close(fd1) == -1)
		return (closeError(fd1));
	if (close(fd2) == -1)
		return (closeError(fd2));
	return (0);
}

/**
 * copyContent - copy file content from src to dest
 * @s_Id: source of file
 * @d_Id: destination of the file
 * Return: 0 - success, -1 or -2 on failure
 */

int copyContent(int *s_Id, int *d_Id)
{
	char buffer[1024];
	int true = 1;
	ssize_t bWrit, bRead, bCount;

	while (true)
	{
		bRead = read(*s_Id, buffer, sizeof(buffer));
		if (bRead == -1)
			return (-1);
		if (bRead == 0)
			break;
		bWrit = 0;
		while (bWrit < bRead)
		{
			bCount = write(*d_Id, buffer + bWrit, bRead - bWrit);
			if (bCount == -1)
				return (-2);
			bWrit += bCount;
		}
	}
	return (0);
}

/**
 * closeError - close Error function
 * @fd: file descriptor
 * Return: int
 */

int closeError(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * readError - read Error function
 * @filename: file descriptor
 * Return: int
 */

int readError(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * writeError - write Error function
 * @filename: file descriptor
 * Return: int
 */

int writeError(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}


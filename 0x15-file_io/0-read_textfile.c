#include "main.h"

/**
 * read_textfile - read a text file
 * @filename: name of the file to open
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t byteSize;

	if (filename == NULL)
		return (0);
	/* open the file for readonly mode */
	fd = open(filename, O_RDONLY);
	/* check if the file was opened successfully */
	if (fd == -1)
		return (0);
	buf = (char *)malloc(letters);
	if (!buf)
		return (0);
	/* read from the file */
	byteSize = read(fd, buf, letters);
	if (byteSize == -1)
	{
		free(buf);
		return (0);
	}
	byteSize = write(STDOUT_FILENO, buf, byteSize);
	if (byteSize == -1)
	{
		free(buf);
		return (0);
	}
	/* release the allocated memory */
	free(buf);
	close(fd);
	return (byteSize);
}

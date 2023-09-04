#include "main.h"

/**
 * create_file - to create a file
 * @filename: name of the file
 * @text_content: text_content
 * Return: 1 - success or -1 - failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, count = 0;

	/* check if file is provided */
	if (filename == NULL)
		return (-1);
	/* exclusively  create a file that does'nt exist */
	fd = open(filename, O_CREAT | O_EXCL | O_WRONLY, 0600);
	/* check if the file already exist */
	if (fd == -1)
		fd = open(filename, O_WRONLY | O_TRUNC);
	/* check if the file failed to open */
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[count])
		count++;
	if (write(fd, text_content, count) < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

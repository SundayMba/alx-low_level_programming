#include "main.h"

/**
 * append_text_to_file - append text to file
 * @filename: file name
 * @text_content: text to append
 * Return: 1 - success or -1 - failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	/* if the file does'nt exist */
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (-1);
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


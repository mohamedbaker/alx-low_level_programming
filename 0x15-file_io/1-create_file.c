#include "main.h"

/**
 * create_file - creates  file
 * @text_content: content to be written
 * @filename: name of file.
 * Return: 1 on success, -1 on fail
*/

int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		return (0);
	while (*text_content++)
		len++;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (len)
		w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}

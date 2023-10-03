#include "main.h"

/**
 * append_text_to_file - appends text to the file end.
 * @filename: filename.
 * @text_content: content.
 * Return: 1 success , -1 fails
*/

int append_text_to_file(const char *filename, char *text_content)
{
int fd, w, len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
	while (*text_content++)
		len++;
	fd = open(filename, O_WRONLY | O_APPEND);
	}

	if (len)
		w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (w == len ? 1 : -1);
}

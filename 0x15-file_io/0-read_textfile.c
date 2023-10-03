#include "main.h"

/**
 * read_textfile - reads a text file and prints it.
 * @filename: name of the fil to read.
 * @letters: number of letters.
 * Return: numbers of letters or 0 in fail.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char *buffer;

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	bytes = read(fd, buffer, letters);
	bytes = write(STDOUT_FILENO, buffer, bytes);

	close(fd);

	free(buffer);

	return (bytes);
}

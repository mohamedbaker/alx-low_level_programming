#include "main.h"

#define ERROR "Error: Can't read from file %s\n"
/**
 * main - copy content from a file to another file
 * @argc: num arg
 * @argv: array of arguments
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int source, dest, fd, error_close;
	char buf[READ_BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	source = open(argv[1], O_RDONLY);
	if (source < 0)
	{
		dprintf(STDERR_FILENO, ERROR, argv[1]), exit(98);
	}
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((fd = read(source, buf, READ_BUF_SIZE)) > 0)
	{
		if (dest < 0 || write(dest, buf, fd) != fd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(source);
			exit(99);
		}
	}
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, ERROR, argv[1]), exit(98);
	}
	error_close = close(source);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source), exit(100);
	}

	error_close = close(dest);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest), exit(100);
	}
	return (0);
}

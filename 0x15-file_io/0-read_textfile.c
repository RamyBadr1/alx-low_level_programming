#include "main.h"
/**
 * read_textfile - Entry point
 * @filename: Name of the file to be read
 * @letters: The number of letters it should read and print
 * Return: The actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; 
	ssize_t to_read, to_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	to_read = read(fd, buffer, letters);
	if (to_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	to_write = write(STDOUT_FILENO, buffer, to_read);
	if (to_write == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	return (to_read);

}

#include "main.h"

/**
 * append_text_to_file - Appends text to a file.
 * @filename: the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: 1 || -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, to_write, s = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[s])
			s++;

		to_write = write(fd, text_content, s);

		if (to_write != s)
			return (-1);
	}

	close(fd);

	return (1);
}


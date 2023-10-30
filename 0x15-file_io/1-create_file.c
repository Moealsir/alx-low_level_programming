#include "main.h"

/**
 * create_file - Creates a file with given filename and text content
 * @filename: The name of the file to create
 * @text_content: The text content to write to the file
 *
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		n = write(fd, text_content, strlen(text_content));

	close(fd);
	if (n == -1)
		return (-1);
	return (1);
}

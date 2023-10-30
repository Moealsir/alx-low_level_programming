#include "main.h"

/**
 * read_textfile - read file
 * @filename: name of file
 * @letters: letter
 * Return: prints read file
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int of;
	char buf[BUF_SIZE * 8];
	ssize_t pf;

	if (filename == NULL || !letters)
		return (0);
	of = open(filename, O_RDONLY);
	if (of == -1)
		return (0);
	pf = read(of, &buf[0], letters);
	pf = write(STDOUT_FILENO, &buf[0], pf);

	close(of);
	return (pf);
}

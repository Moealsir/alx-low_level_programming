#include "main.h"
#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to file %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)


/**
* main - Entry point for cp program
* @ac: Argument count
* @av: Argument vector
*
* Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure
*/
int main(int ac, char **av)
{
		int from_fd, to_fd;
		ssize_t b;
		char buf[READ_BUF_SIZE];

		from_fd = to_fd = 0;

		if (ac != 3)
			dprintf(STDERR_FILENO, USAGE), exit(97);
		from_fd = open(av[1], O_RDONLY);
		if (from_fd == -1)
			dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
		to_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
		if (to_fd == -1)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

		while ((b = read(from_fd, buf, READ_BUF_SIZE)) > 0)
			if (write(to_fd, buf, b) != b)
				dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
		if (b == -1)
			dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

		from_fd = close(from_fd);
		to_fd = close(to_fd);
		if (from_fd)
			dprintf(STDERR_FILENO, ERR_NOCLOSE, from_fd), exit(100);
		if (to_fd)
			dprintf(STDERR_FILENO, ERR_NOCLOSE, to_fd), exit(100);
		return (EXIT_SUCCESS);
}

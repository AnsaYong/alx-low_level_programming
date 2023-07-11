#include "main.h"

size_t copy_file(const char *filename1, const char *filename2);

/**
 * main - calls copy_file function
 * @argc: stores no of arguments passed
 * @argv: array which stores the string arguments passed
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	/* int res;*/

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	/* res = copy_file(av[1], av[2]);
	 * dprintf("STDOUT_FILENO, "-> %i)\n", res);
	 */

	return (0);
}

/**
 * copy_file - copies the content of a file to another file
 * @file_from: file to copy from
 * @file_to: file to copy to
 *
 * Return: 0
 */
size_t copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, fd_from_close, fd_to_close;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	/* open file to read from */
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	/* open/create file to write to */
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	/* use a loop to read till end of file_from ( might be more than 1024 */
	/* in each read loop, write to file_to */
	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			fd_from_close = close(fd_from);
			fd_to_close = close(fd_to);
			exit (99);
		}
	}

	/* close both files */
	fd_from_close = close(fd_from);
	if (fd_from_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close df %i\n", fd_from_close);
		exit(100);
	}
	fd_to_close = close(fd_to);
	if (fd_to_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close df %i\n", fd_to_close);
		exit(100);
	}

	return (0);
}

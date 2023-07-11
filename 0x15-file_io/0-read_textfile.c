#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file to be read
 * @letters: the number of chars to be read and printed
 *
 * Return: the actual number of letters read and printed successfully,
 * or 0 if it fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t lett_r, lett_w;
	char *rd;

	if (filename == NULL)
		return (0);

	/* create a buffer to store read chars */
	rd = malloc(sizeof(char) * letters + 1);
	if (rd == NULL)
		return (0);

	/* open the file to be read */
	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);

	/* read the file, storing each read char in the created buffer */
	lett_r = read(file_d, rd, letters);
	rd[lett_r] = '\0';

	/* then write chars stored in the buffer to stdout */
	if ((lett_w = write(STDOUT_FILENO, rd, lett_r)) != lett_r)
		return (0);

	free(rd);
	close(file_d);

	return (lett_w);
	}

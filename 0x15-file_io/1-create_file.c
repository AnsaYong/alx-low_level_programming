#include "main.h"

/**
 * create_file - creates a file and writes to it
 * @filename: filename of file to be created
 * @text_content: data to write to file
 *
 * Return: 1 on success, and -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	size_t lett_c, len = 0;

	if (filename == NULL)
		return (-1);

	/* determine tthe string length */
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			len++;
			i++;
		}
	}

	/* open / create the file */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	/* use write() to copy text_content */
	if (text_content != NULL)
	{
		lett_c = write(fd, text_content, len);
		if (lett_c == -1)
		{
			close(fd);
			return (-1);
		}

	close(fd);

	return (1);
}

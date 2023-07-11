#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename of file to be created
 * @text_content: data to append to end of file if it exists already
 *
 * Return: 1 on success, and -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	int lett_c, len = 0;

	if (filename == NULL)
		return (-1);

	/* determine the string length */
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			len++;
			i++;
		}
	}

	/* open / create the file */
	fd = open(filename, O_WRONLY | O_APPEND);
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
	}

	close(fd);

	return (1);
}

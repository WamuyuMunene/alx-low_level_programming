#include "main.h"

/**
 * append_text_to_file - appends text to end of file
 *
 * @filename: char pointer
 * @text_content: char pointer
 *
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int bwr;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	bwr = write(fd, text_content, len);

	if (fd == -1 || bwr == -1)
		return (-1);

	close(fd);
	return (1);
}

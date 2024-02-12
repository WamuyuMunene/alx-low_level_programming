#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: char pointer
 * @text_content: char pointer
 *
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bwr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY, O_CREAT, O_TRUNC, S_IRUSR, S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bwr = write(fd, text_content, strlen(text_content));
		if (bwr == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

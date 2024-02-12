#include "main.h"
#include <stddef.h>

/**
 * read_textfile - reads text file and prints to POSIX stdout
 *
 * @filename: char pointer
 * @letters: size_t
 *
 * Return: number of letters rdwr or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t brd;
	ssize_t bwr;
	int fd = open(filename, O_RDONLY);

	if (filename == NULL)
		return (0);

	if (fd == -1)
		return (0);

	buffer = (char *)malloc(sizeof(char) *(letters + 1));
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	brd = read(fd, buffer, letters);
	if (brd == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	bwr = write(STDOUT_FILENO, buffer, brd);
	if (bwr == -1 || bwr != brd)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (brd);
}

#include "main.h"

/**
 * read_textfile - Reads a text file
 * @filename: The file name
 * @letters: The amount of letters to read
 *
 * Return: The actual number of letters it could read
 * or 0 if a problem occured
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, sz;
	char *buf = malloc(sizeof(char) * letters);

	if (!filename || letters <= 0)
		return (0);

	if (!buf)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	sz = read(fd, buf, letters);
	if (sz == -1) return (0);
	buf[sz] = '\0';

	return (write(STDOUT_FILENO, buf, letters));
	close(fd);
}

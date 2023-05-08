#include "main.h"

/**
 * read_textfile - reads a text and prints it to
 * the POSIX standard output
 * @filename: the file we should read from
 * @letters: number of letters that will be read
 * and print
 *
 * Return: 0 for all error or the actual number of letters
 * it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r, w, cls;
	char *buf;

	buf = (char *)malloc(letters * sizeof(char));
	if (filename == NULL || buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	if (fd == -1 || r == -1 || w == -1 || w != r)
	{
		free(buf);
		return (0);
	}

	cls = close(fd);
	if (cls == -1)
		return (0);
	free(buf);

	return (w);
}

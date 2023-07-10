#include "main.h"

/**
 * read_textfile - Reads a text and prints it
 * to the POSIX standard output
 * @filename: is the file we should read from
 * @letters: the numbers of letters that will be read and print
 *
 * Return: 0 for all error or the actual number of
 * letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wt, cls;
	char  *buf;

	buf = (char *)malloc(letters * sizeof(char));
	if (filename == NULL || buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd != -1)
	{
		rd = read(fd, buf, letters);
		if (rd != -1)
		{
			wt = write(STDOUT_FILENO, buf, rd);
			if (wt == -1)
			{
				free(buf);
				return (0);
			}
			else
			{
				cls = close(fd);
				if (cls == -1)
					return (0);
				else
					return (wt);
			}
		}
		else
		{
			free(buf);
			return (0);
		}
	}
	else
	{
		free(buf);
		return (0);
	}
}

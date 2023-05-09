#include "main.h"

/**
 * filefromFail - Display error message if the file isn't readable
 * @file: the file name
 *
 */
void filefromFail(char *file)
{
	dprintf(STDERR_FILENO, "Eroor: Can't read from file %s\n", file);
	exit(98);
}

/**
 * filetoFail - Display an error message if it is not
 * possible to write in a file
 * @file: the file to check
 */
void filetoFail(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to  %s\n", file);
	exit(99);
}

/**
 * closeFail - Error message when file can(t be closed
 * @fd: file descriptor
 */
void closeFail(int fd)
{
	int cls;

	cls = close(fd);
	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copy content of a file to another file
 * @argc: number of arguments received
 * @argv: arrayy of arguments
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int from, to, rdfrom, wrto;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
		filefromFail(argv[1]);
	if (argv[2] == NULL)
		filetoFail(argv[2]);
	from = open(argv[1], O_RDONLY);
	rdfrom = read(from, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || rdfrom == -1)
			filefromFail(argv[1]);
		wrto = write(to, buf, rdfrom);
		if (to == -1 || wrto == -1)
			filetoFail(argv[2]);
		rdfrom = read(from, buf, 1024);
		if (rdfrom == -1)
			filefromFail(argv[1]);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rdfrom > 0);
	closeFail(from);
	closeFail(to);

	return (0);
}

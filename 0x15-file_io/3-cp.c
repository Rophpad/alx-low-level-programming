#include "main.h"

/**
 * create_buffer - Allocates 1024 bytes for buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * err_msg_file1 - Display error massage if the file is not reafable
 * @file: the file to chack readability
 *
 */
void err_msg_file1(char *file)
{
	dprintf(STDERR_FILENO, "Eroor: Can't read from file %s\n", file);
	exit(98);
}

/**
 * err_msg_file2 - Display error massage
 * if it is impossiblr to write in the file
 * @file: to file to write in
 *
 */
void err_msg_file2(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to  %s\n", file);
	exit(99);
}

/**
 * err_msg_cls - Error message when file can't be close
 * @fd: file descriptor
 *
 */
void err_msg_cls(int fd)
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
 * main - Copy content from a file to another file
 * @argc: number of arguments received
 * @argv: array of arguments
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int file1, file2, rdfile1, wfile2;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
		err_msg_file1(argv[1]);
	if (argv[2] == NULL)
		err_msg_file2(argv[2]);
	buf = create_buffer(argv[2]);
	file1 = open(argv[1], O_RDONLY);
	rdfile1 = read(file1, buf, 1024);
	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (file1 == -1 || rdfile1 == -1)
			err_msg_file1(argv[1]);
		wfile2 = write(file2, buf, rdfile1);
		if (file2 == -1 || wfile2 == -1)
			err_msg_file2(argv[2]);
		rdfile1 = read(file1, buf, 1024);
		if (rdfile1 == -1)
			err_msg_file1(argv[1]);
		file2 =  open(argv[2], O_WRONLY | O_APPEND);
	} while (rdfile1 > 0);
	err_msg_cls(file1);
	err_msg_cls(file2);

	return (0);
}

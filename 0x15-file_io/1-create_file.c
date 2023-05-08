#include "main.h"

/**
 * create_file - Create a file
 * @filename: is the name of the file
 * @text_content: is the text that will be write in the file
 *
 * Return: -1 for fail and 1 for success
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		len = sizeof(text_content);
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}

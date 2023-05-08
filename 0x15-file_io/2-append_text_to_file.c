#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: The string to add at the end of the file
 *
 * Return: -1 for all fails 1 for success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opn, w, cls, len = 0;

	if (filename == NULL)
		return (-1);
	opn = open(filename, O_WRONLY | O_APPEND);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		w = write(opn, text_content, len);
	}
	if (opn == -1 || w == -1)
		return (-1);
	cls = close(opn);
	if (cls == -1)
		return (-1);
	return (1);
}

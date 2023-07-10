#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: the string to add at the end of the file
 *
 * Return: -1 dor all fails and 1 for success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wt, cls, len = 0;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND);
	if (op != -1 && text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		wt = write(op, text_content, len);
		if (wt != -1)
		{
			cls = close(op);
			if (cls == 1)
				return (-1);
			else
				return (1);
		}
		else
			return (-1);
	}
	else
		return (-1);
}

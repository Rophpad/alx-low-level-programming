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
	int op, wt, cls, len;

	len = 0;
	if (filename == NULL)
		return (-1);

	op = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (op != -1)
	{
		if (text_content != NULL)
		{
			len = 0;
			while (text_content[len] != '\0')
			{
				len++;
			}
			wt = write(op, text_content, len);
			if (wt != -1)
			{
				cls = close(op);
				if (cls == -1)
					return (-1);
				else
					return (1);
			}
			else
				return (-1);
		}
		else
			return (1);
	}
	else
		return (-1);
}

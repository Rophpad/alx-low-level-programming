#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
		if (src[i] == '\0')
			break;
	}
	if (i > n)
	{
		dest[i] = '\0';
	}

	return (dest);
}

#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: a pointer to a string
 * @src: a pointer to a string
 * @n: an integer
 *
 * Return: dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0,j = 0;

	while (*(dest + i) != '\0')
		i++;
	while ((n - j ) > 0)
	{
		if (*(src + j) != '\0')
		{
			*(dest + i) = *(src + j);
			++j;
			i++;
		}
		else
			*(dest + i) = '\0';
	}
	if (*(dest + i) != '\0')
		*(dest + i) = '\0';
	return (dest);
}

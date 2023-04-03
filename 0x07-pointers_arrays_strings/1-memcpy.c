#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: a string of char representing the destination
 * @src: a string of char representing the source
 * @n: thenumber of bytes that will be copied
 *
 * Return: a pointer to dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

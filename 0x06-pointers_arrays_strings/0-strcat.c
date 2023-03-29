#include "main.h"

/**
 * _strcat - Concatenates two stings
 * @dest: a string
 * @src: second string
 *
 * Return: dest (Adress memory of dest)
 *
 */
char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	while (*(dest + i) != '\0')
		i++;
	do {
		*(dest + i) = *(src + j);
		++j;
		i++;
	} while (j > 0 && *(scr + j) != '\0');
	return (dest);
}

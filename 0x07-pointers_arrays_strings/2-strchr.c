#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character ina string
 * @s: a string of char
 * @c: a single char to find in s
 *
 * Return: apointer to the first occurrence of the char c in the string s
 * or NULL if the char c is mot found
 *
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}

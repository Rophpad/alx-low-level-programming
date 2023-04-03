#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
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

	while (s[i])
	{
		if (*(s + i) == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}

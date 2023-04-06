#include "main.h"

/**
 * _strlen_recursion - Displays the length of a string
 * @s: the string
 *
 * Return: len (an integer representing the length)
 *
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (len);
	else
	{
		len = 1 + _strlen_recursion(s + 1);
		return (len);
	}
}

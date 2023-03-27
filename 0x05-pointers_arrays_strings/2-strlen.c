#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: a string 
 *
 * Return: compt (The length, an integer)
 */
int _strlen(char *s)
{
	int compt = 0;

	while (*(str + compt) != '\0')
		compt++;
	return (compt);
}

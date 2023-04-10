#include "main.h"

/**
 * _isalpha - is alpha
 * @c: an integer
 * 
 * Return: an integer
 *
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

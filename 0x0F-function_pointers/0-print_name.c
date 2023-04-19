#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: Name to print
 * @f: Pointer to void function, taking a pointer to a char as argument
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

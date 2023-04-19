/**
 * print_name - print a name
 * @name: Name to print
 * @f: Pointer to void function, taking a pointer to a char as argument
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

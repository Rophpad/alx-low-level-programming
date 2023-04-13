#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of memory needed
 *
 * Return: Pointer to address of the memory
 */
void *malloc_checked(unsigned int b)
{
	void *to_mem;

	to_mem = malloc(b);
	if (to_mem == NULL)
		exit(98);
	return (to_mem);
}

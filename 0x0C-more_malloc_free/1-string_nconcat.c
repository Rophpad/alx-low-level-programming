#include <stdlib.h>

/**
 * string_nconcat - Concatenate two strings using n amount of s2
 * @s1: First string
 * @s2: String to add to end of s1
 * @n: Amount of s2 to add to s1
 *
 * Return: pointer to new area in memory, NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *to_mem, *empty;
	unsigned int i, len, j;
	unsigned int size;

	len = 0;
	empty = "";
	if (s1 == NULL)
		s1 = empty;
	if (s2 == NULL)
		s2 = empty;
	while (s1[len] != '\0')
		len++;
	size = (len + n) * sizeof(*to_mem);
	to_mem = malloc(size + 1);
	if (to_mem == NULL)
		return (NULL);
	i = 0;
	while (i < size && s1[i] != '\0')
	{
		to_mem[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < size && s2[j] != '\0')
	{
		to_mem[i] = s2[j];
		i++;
		j++;
	}
	to_mem[i] = '\0';
	return (to_mem);
}

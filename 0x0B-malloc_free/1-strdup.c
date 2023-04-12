#include <stdlib.h>

/**
 * _strdup - Return pointer to a new string that duplicates given string,
 * allocate mem w/ malloc
 * @str: String to duplicate
 *
 * Return: Pointer to new string, NULL if failed to make memory
 */
char *_strdup(char *str)
{
	char *str2;
	unsigned int i, siz;

	if (str == NULL)
		return (NULL);
	i = siz = 0;
	while (str[siz] != '\0')
	{
		++siz;
	}
	str2 = malloc(siz * sizeof(*str));
	if (str2 == NULL)
		return (NULL);
	while (i <= siz)
	{
		str2[i] = str[i];
		i++;
	}
	return (str2);
}

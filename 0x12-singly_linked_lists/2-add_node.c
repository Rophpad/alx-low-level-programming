#include "lists.h"

/**
 * add_node -adds a new node at the beginning of list_t list
 * @head: a pointer to the head of the list
 * @str: the string to be add to the list
 *
 * Return: NULL or address to the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	char *dup_str = strdup(str);
	list_t *new;

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL || dup_str == NULL)
	{
		free(dup_str);
		free(new);
		return (NULL);
	}
	while (*str != '\0')
	{
		len++;
		str++;
	}
	new->str = dup_str;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}

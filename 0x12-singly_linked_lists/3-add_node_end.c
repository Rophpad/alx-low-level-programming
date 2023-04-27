#include "lists.h"

/**
 * add_node_end - adds a new node at the end of list_t list
 * @head: a pointer to the head of the list
 * @str: the string to be add to the list
 *
 * Return: NULL or address to the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	char *dup_str = strdup(str);
	list_t *new, *last;

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
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}

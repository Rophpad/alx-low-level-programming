#include "lists.h"

/**
 * free_list - Frees a list list_t
 * @head: a pointer to the list_t list
 *
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

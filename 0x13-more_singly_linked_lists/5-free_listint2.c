#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list
 * and sets the head to NULL
 * @head: the head of the list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *holder;

	if (head == NULL)
		return;

	while (*head)
	{
		holder = (*head)->next;
		free(*head);
		*head = holder;
	}
	head = NULL;
}

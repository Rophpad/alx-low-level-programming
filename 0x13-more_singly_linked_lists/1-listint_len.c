#include "lists.h"

/**
 * listint_len - returns the number of elements in a listint_t list
 * @h: a listint_t list
 *
 * Return: the number of nodes in h
 */
size_t listint_len(const listint_t *h)
{
	size_t count_nodes = 0;

	while (h != NULL)
	{
		count_nodes++;
		h = h->next;
	}
	return (count_nodes);
}

#include "lists.h"

/**
 * list_len - Finds the number of elements in
 * a linked list_t list
 * @h: the linked list
 *
 * Return: the number of elements in h
 * (the number of nodes)
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		++nodes;
		h = h->next;
	}
	return (nodes);
}

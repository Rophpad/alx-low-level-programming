#include "lists.h"

/**
 * get_nodeint_at_index - Gets the nth node
 * @head: node's head
 * @index: the nth node
 *
 * Return: NULL or the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *indexNode;
	unsigned int i;

	indexNode = (listint_t *)malloc(sizeof(listint_t));
	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL && i != (index - 1))
			return (NULL);
	}
	indexNode->n = head->n;
	indexNode->next = head->next;
	return (indexNode);
}

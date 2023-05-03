#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node
 * at a given position
 * @head: list's head
 * @idx: the position that the new node will take
 * @n: n data value for the new node
 *
 * Return: NULL or the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *indexNode, *copy = *head;
	unsigned int i;

	indexNode = (listint_t *)malloc(sizeof(listint_t));
	if (indexNode == NULL)
		return (NULL);
	indexNode->n = n;
	if (idx == 0)
	{
		indexNode->next = copy;
		*head = indexNode;
		return (indexNode);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);
		copy = copy->next;
	}

	indexNode->next = copy->next;
	copy->next = indexNode;

	return (indexNode);
}

#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of
 * a listint_t list
 * @head: the head of the list
 * @n: value that the n of new node will store
 *
 * Return: NULL or the address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

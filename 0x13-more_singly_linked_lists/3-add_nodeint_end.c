#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of
 * a listint_t list
 * @head: the head of the list
 * @n: the value of n of the new node
 *
 * Return: NULL or the address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *endNode;

	/*current = *head;*/
	endNode = (listint_t *)malloc(sizeof(listint_t));

	if (endNode == NULL)
		return (NULL);
	endNode->n = n;
	endNode->next = NULL;
	if (*head == NULL)
	{
		*head = endNode;
		return (endNode);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = endNode;
	return (endNode);
}

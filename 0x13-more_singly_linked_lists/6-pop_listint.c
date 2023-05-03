#include "lists.h"

/**
 * pop_listint - Deletes the head of a listint_t linked list
 * @head: the head of the list
 *
 * Return: 0 or the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *nextNode;
	int data;
	
	if (*head == NULL)
		return (0);
	nextNode = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = nextNode;
	return (data);
}

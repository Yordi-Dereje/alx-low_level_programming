#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - a function that deletes the head node of a linked list
 * @head: the passed head
 * Return: the head node's data or n or 0
 */
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *new = NULL;

	if (!*head)
		return (0);
	new = (*head)->next;
	i = (*head)->n;
	free(*head);
	(*head) = new;
	return (i);
}

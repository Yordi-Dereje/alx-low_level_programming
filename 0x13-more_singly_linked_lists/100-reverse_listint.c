#include "lists.h"
/**
 * reverse_listint - a function that reverses a linked list
 * @head: the passed head
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *i;
	listint_t *j;

	i = NULL;
	j = NULL;
	while (*head != NULL)
	{
		j = *head;
		*head = (*head)->next;
		j->next = i;
		i = j;
	}
	*head = j;
	return (*head);
}

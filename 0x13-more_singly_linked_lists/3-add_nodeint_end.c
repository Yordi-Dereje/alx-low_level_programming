#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - a function that adds a new node at the end of a list
 * @head: the passed list's head
 * @n: the new node
 * Return: the address of the new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h = (listint_t *)malloc(sizeof(listint_t));
	listint_t *l = *head;

	if (h == NULL)
		return (NULL);
	h->n = n;
	h->next = NULL;
	if (*head == NULL)
	{
		*head = h;
		return (*head);
	}
	while (l->next)
		l = l->next;
	l->next = h;
	return (h);
}

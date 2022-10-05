#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - a function that adds a new node at the beginning of a list
 * @head: the passed lists head
 * @n: the new element
 * Return: the address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
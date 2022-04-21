#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - a function that adds a new node at the end of a list
 * @head: the passed list's head
 * @str: the passed string
 * Return: the address of the new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n = (list_t *)malloc(sizeof(list_t));
	list_t *l = *head;
	int i = 0;

	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	while (str[i] != '\0')
		i++;
	n->len = i;
	n->next = NULL;
	if (*head == NULL)
	{
		*head = n;
		return (*head);
	}
	while (l->next)
		l = l->next;
	l->next = n;
	return (n);
}

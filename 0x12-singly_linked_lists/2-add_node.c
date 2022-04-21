#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - a function that adds a new node at the beginning of a list
 * @head: the passed head
 * @str: the passed string
 * Return: address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	int i = 0;
	
	if (str == NULL)
		return (NULL);
	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	if (n->str == NULL)
	{
		free(n);
		return (NULL);
	}
	while (n->str[i])
		i++;
	n->len = i;
	n->next = *head;
	*head = n;
	return (n);
}

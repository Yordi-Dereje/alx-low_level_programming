#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - a function to insert a new node ai a position
 * @head: the passed head
 * @idx: index of the list where the new node should be added
 * @n: the inserted node
 * Return: the addres of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *i;
	listint_t *j;

	i = *head;
	j = malloc(sizeof(listint_t));
	if (j == NULL)
		return (NULL);
	j->n = n;
	if (index == 0)
	{
		j->next = i;
		*head = j;
		return (*head);
	}
	while (index > 1)
	{
		i = i->next;
		index--;
		if (!i)
		{
			free(j);
			return (NULL);
		}
	}
	j->next = i->next;
	i->next = j;
	return (j);
}

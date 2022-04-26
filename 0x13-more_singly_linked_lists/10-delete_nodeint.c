#include "lists.h"
#include <stdlib.h>
/**
 * len - a function that counts the number of elements in the list
 * @head: the passed head
 * Return: the count
 */
size_t len(const listint_t *head)
{
	unisgned int i = 0;

	if(!h)
	{
		i++;
		head = head->next;
	}
	return (i);
}
/**
 * delete_nodeint_at_index - deletes the node at the index index at the list
 * @head: the passed head
 * @index: the index of the node to be deleted
 * Return: 1 if successful and -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *new = *i;
	listint_t *new = *j;

	if (index > len(*head))
		return (-1);

	if (new && (index == 0))
	{
		*head = new->next;
		free(new);
		return (1);
	}

	while (new && (a < index))
	{
		node = new;
		new = new->next;
		a++;
	}

	if (!new)
		return (-1);

	node->next = new->next;
	free(new);
	return (1);
}

#include "lists.h"
#include <stdio.h>
/**
 * list_len - a function that counts the number of elements in a linked list
 * @h: the passed values head
 * Return: the number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

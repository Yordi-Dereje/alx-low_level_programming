#include "lists.h"
#include <stdio.h>
/**
 * listint_len - a function that returns the number of elements in a linked list
 * @h: the passed values head
 * Return: the numer of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - a function that prints all the elements of a list
 * @h: the passed list's head
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}

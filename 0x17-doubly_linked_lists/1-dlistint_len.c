#include "lists.h"
/**
 * dlistint_len - returns the number of nodes in a doubly linked list
 * @h: pointer to the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	if (!h)
		return (0);
	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}

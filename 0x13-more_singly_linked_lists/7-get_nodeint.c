#include "lists.h"
/**
 * len - a function that counts the number of elements in the list
 * @head: pointer to first element on list
 * Return: the count
 */
size_t len(const listint_t *head)
{
	int i = 0;

	while (head != NULL)
	{
		head = head->next;
		i++;
	}
	return (i);
}
/**
 * get_nodeint_at_index - a function that returns the nth node in linked list
 * @head: the passed head
 * @index: the index of the node starting at 0
 * Return: the nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (index >= len(head))
		return (NULL);
	while (i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}

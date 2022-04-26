#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - a function that frees a list
 * @head: the passed head
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}

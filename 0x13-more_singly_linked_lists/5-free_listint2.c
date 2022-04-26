#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free a list
 * @head: the passed head
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *i;
	listint_t *j;

	if (head == NULL)
		return;
	j = *head;
	while (j != NULL)
	{
		i = j;
		j = j->next;
		free(i);
	}
	*head = NULL;
}

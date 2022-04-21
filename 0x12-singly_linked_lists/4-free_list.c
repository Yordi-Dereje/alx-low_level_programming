#include "lists.h"
#include <stdlib.h>
/**
 * free_list - a function that frees a list
 * @head: the passed head
 * Return: nothing
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
}

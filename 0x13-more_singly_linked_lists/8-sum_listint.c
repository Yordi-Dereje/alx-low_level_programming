#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - a function that returns the sum of all n in a linked list
 * @head: the passed head
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

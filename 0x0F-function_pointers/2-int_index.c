#include <stdio.h>
#include "main.h"
/**
 * int_index - a function that searches for an integer
 * @array: the passed values
 * @size: the number of elements in the array
 * @cmp: pointer to a function used to compare values
 * Return: no match -1, size less than 0 -1 and 0 if successful
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i] != 0)
				return (i);
	}
	return (-1);
}

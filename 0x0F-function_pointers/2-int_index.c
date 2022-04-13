#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: the passed arrays
 * @size: the number of elements in the array
 * @cmp: pointer to a function used to compare values
 * Return: -1 for no match, -1 for size less than 0 and if successful 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) > 0)
				return (i);
		}
	}
	return (-1);
}

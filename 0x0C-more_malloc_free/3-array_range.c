#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 * @min: smallest range
 * @max: biggest range
 * Return: the pointer to the newly created array or null
 */
int *array_range(int min, int max)
{
	int *a;
	int size;
	int i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	a = (int *)malloc(size*sizeof(int));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = min + i;
	return (a);
}

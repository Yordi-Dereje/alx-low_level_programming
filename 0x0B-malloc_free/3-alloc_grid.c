#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to a 2D array of integers
 * @width: the column
 * @height: the row
 * Return: a pointer of a 2D array
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ar = malloc(sizeof(int*) * width);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		ar[i] = malloc(sizeof(int) * width);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ar[i][j] = 0;
	}
	return (ar);
}

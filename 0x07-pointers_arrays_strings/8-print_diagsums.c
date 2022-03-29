#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function to print the sum of the 2 diagonals
 *
 * @a: the matrix array
 * @size: the size of the array
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;
	int newSize = size * size;

	for (i = 0; i < newSize; i += (size + 1))
		sum1 += a[i];

	for (i = size - 1; i < newSize - 1; i += (size - 1))
		sum2 += a[i];
	printf("%d, %d\n", sum1, sum2);
}

#include "main.h"
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

	for (i = 0; i < size; i++)
		sum1 = sum1 + a[i][j];

	for (i = 0; i < size; i++)
		sum2 = sum2 + a[size - 1 - i][i];
	printf("%d, %d\n", sum1, sum2);
}

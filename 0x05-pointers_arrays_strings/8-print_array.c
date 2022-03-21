#include "main.h"
/**
 * print_array - print n elements of an array of integers
 *
 * @n: numbers of elements to be printed
 *
 * @a: the passed array
 *
 * return: nothing
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b != n - 1)
			printf(", ");
	}
	printf("\n");
}

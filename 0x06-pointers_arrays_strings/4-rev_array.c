#include "main.h"
/**
 * reverse_array - a function that reverses its content
 *
 * @a: array
 *
 * @n: number of elements of the array
 *
 * return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n - 1; i++)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
	}
}

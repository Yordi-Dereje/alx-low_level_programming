#include "main.h"
/**
 * swap_int - function to swap two numbers
 * @a: parameter 1
 * @b: parameter 2
 * return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

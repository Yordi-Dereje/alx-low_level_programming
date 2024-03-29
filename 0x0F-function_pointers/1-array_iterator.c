#include <stdio.h>
#include "main.h"
/**
 * array_iterator - excutes a function on the elements of an array
 * @size: size of the array
 * @action: a pointer to the function you need to use
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	for (i = 0; i < size; i++)
		action(array[i]);
}

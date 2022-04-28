#include "main.h"
/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: the passed value
 * @index: the index starting from 0 of the bit you want to set
 * Return: 1 if successful or -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}

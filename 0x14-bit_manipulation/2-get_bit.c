#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: the passed value
 * @index: the index starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	b = (index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1;
	return (b);
}

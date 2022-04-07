#include "main.h"
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: number of bytes you need to allocate
 * Return: a pointer to the allocated memory or 98
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}

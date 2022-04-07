#include "main.h"
#include <stdlib.h>
/**
 * _calloc: a function that allocates memory for an array using malloc
 * @nmemb: the passed array
 * @size: byte size
 * Return: a pointer to the allocated memory or null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		*((char *)a + i) = 0;
	return (a);
}

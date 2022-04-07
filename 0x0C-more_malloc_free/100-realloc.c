#include "main.h"
#include <stdlib.h>
/**
 * _realloc - a function that reallocates a memory block
 * @ptr: a pointer previously allocated with old_size
 * @old_size: size in bytes for ptr
 * @new_size: new size for the new memory block
 * Return: the new pointer in the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *a;
	unsigned int i;

	if ((new_size > old_size) && (ptr != NULL))
	{
		a = malloc(new_size);
		if (a == NULL)
			return (a);
		for (i = 0; i < old_size; i++)
			a[i] = *((char *)ptr + 1);
		free(a);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		a = malloc(new_size);
		if (a == NULL)
			return (NULL);
	}
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	return (a);
}

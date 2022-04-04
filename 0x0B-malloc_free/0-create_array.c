#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars
 * size: the size of the array
 * c: the passed char
 * Return: a pointer to the array or null
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);
	else
		ar = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		str[i] = c;
	return (ar);
}

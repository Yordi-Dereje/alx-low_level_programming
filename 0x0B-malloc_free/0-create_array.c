#include "main.h"
/**
* create_array - a function that creates an array of chars
* size: the size of the array
* c: the passed char
* Return: a pointer to an array or null
*/
char *create_array(unsigned int size, char c)
{
	char *ar;

	if (size == 0)
		return NULL;
	else
		ar = malloc(size * sizeof(char));
	return (ar);
}

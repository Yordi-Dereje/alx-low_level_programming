#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * @str: the passed string
 * Return: a pointer to the duplicated string or null
 */
char *_strdup(char *str)
{
	char *ar;
	int i;
	int l = 0;

	if (str == NULL)
		return (NULL);
	while (str[l] != '\0')
		l++;
	
	l += 1;
	ar = malloc(l * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
		ar[i] = str[i];
	return (ar);
}

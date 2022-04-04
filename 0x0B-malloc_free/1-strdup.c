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
	int l;

	if (str == NULL)
		return (NULL);
	for (l = 0; str[l] != '\0'; l++);
	ar = malloc(l*sizeof(char));
	if (ar == NULL)
		return (NULL);
	else
	{
		for (i = 0; i < l; i++)
			ar[i] = str[i];
	}
	return (ar);
}

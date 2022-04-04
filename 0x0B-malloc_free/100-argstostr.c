#include "main.h"
#include <stdlib.h>
/**
 * argstostr - a function that concatenates all arguments
 * @ac: the count
 * @av: the passed arguements
 * Return: a pointer to a new string or null
 */
char *argstostr(int ac, char **av)
{
	char *ar;
	int i;
	int j;
	int e = 0;
	int n = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			e++;
		e++;
	}
	e++;
	ar = malloc(sizeof(char) * e);
	if (e == NULL)
		return NULL;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ar[n] = av[i][j];
			n++;
		}
		ar[n] = '\n';
		n++;
	}
	ar[n] = '\0';
	return (ar);
}

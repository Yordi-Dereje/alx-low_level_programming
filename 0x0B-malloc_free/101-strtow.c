#include "main.h"
#include <stdlib.h>
/**
 * counter - count the number of words in the passed string
 * @s: the passed string
 * Return: no of words
 */
int counter(char *s)
{
	int a = 0;
	int i;
	int words = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			words++;
		}
	}
	return (words);
}
/**
 * strtow - a function to split the strings into words
 * @str: the passed string
 * Return: pointer to an array of strings or null
 */
char **strtow(char *str)
{
	char **ar2d;
	char *ar1d;
	int i;
	int j;
	int k = 0;
	int l = 0;
	int words;
	int a = 0;
	int b;

	while (str[l] != '\0')
		l++;
	words = counter(str);
	if (words == 0)
		return (NULL);
	words += 1;
	ar2d = (char **) malloc(sizeof(char *) * (words));
	if (ar2d == NULL)
		return (NULL);
	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (j)
			{
				b = i;
				ar1d = (char *) malloc(sizeof(char) * (j + 1));
				if (ar1d == NULL)
					return (NULL);
				while (a < b)
					*ar1d++ = str[a++];
				*ar1d = '\0';
				ar2d[k] = ar1d - j;
				k++;
				j = 0;
			}
		}
		else if (j++)
			a = i;
	}
	ar2d[k] = NULL;
	return (ar2d);
}

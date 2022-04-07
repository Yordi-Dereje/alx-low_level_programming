#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first passed string
 * @s2: second passed string
 * @n: the amount of s2 that is concatenated
 * Return: the newly appointed pointer or null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int l = 0;
	unsigned int totallen;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l] != '\0')
		l++;
	totallen = l + n + 1;
	a = malloc(sizeof(char) * totallen);
	if (a == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		a[i] = s1[i];
	for (j = 0; j < n; j++)
		a[i + j] = s2[j];
	a[i + j] = '\0';
	return (a);
}

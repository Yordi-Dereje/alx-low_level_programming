#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: first passed string
 * @s2: second passed string
 * Return: the concatenated string or null
 */
char *str_concat(char *s1, char *s2)
{
	char *con;
	int i;
	int a;
	int b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++);
	for (b = 0; s2[b] != '\0'; b++);
	b += 1;
	a += b;
	con = malloc (a * sizeof(char));
	if (con == NULL)
		return (NULL);
	for (a = 0: s1[a] != '\0'; a++)
		con[a] = s1[a];
	for (b = 0; s2[b] != '\0'; a++, b++)
		con[a] = s2[b];
	con[a] = '\0';
	return (con);
}

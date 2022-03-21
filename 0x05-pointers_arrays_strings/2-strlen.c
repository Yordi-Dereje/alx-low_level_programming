#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 *
 * @s: the passed string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

#include<main.h>
/**
 * _strlen(char *s) - a function that returns the length of a string
 *
 * @s: the passed string
 *
 * return: the value
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		*s++;
		a++;
	}
	return (a);
}
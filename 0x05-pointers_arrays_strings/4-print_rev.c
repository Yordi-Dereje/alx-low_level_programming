#include "main.h"
/**
 * print_rev - a function that prints a string in reverse
 *
 * @s: a passed variable
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		s++;
		a++;
	}
	
	int b = a; 

	while (s[b] >= 0)
	{
		_putchar(s[b]);
		b--;
	}
	_putchar('\n');
}

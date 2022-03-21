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
	int b = a;

	for(a = 0; *s != '\0'; a++)
	{
		s++;
	}
	
	for (b = a; s[b] >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}

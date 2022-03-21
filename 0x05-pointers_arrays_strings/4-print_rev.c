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
	int a;
	int b;

	for (a = 0; s[a] != '\0'; )
	{
		a++;
	}

	for (b = a - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}

#include<main.h>
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
	
	for (int b = a; s[b] >= 0; b--)
		_putchar(s[b]);
	_putchar('\n');
}

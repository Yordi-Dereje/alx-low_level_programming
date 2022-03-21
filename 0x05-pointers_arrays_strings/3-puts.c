#include "main.h"
/**
 * _puts - prints a string
 *
 * @str: the passed string
 *
 * Return: nothing
 */
void _puts(char *str)
{
	for( int a = 0; str[a] != 0; a++)
		_putchar(str[a]);
	_putchar('\n');
}

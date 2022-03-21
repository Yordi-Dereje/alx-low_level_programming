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
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}

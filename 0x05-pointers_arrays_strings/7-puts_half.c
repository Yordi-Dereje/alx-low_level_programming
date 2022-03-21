#include "main.h"
/**
 * puts_half - a function that prints half of the string
 *
 * @str: passed value
 *
 * return: nothing
 */
void puts_half(char *str)
{
	int a = 0;
	int b;

	while (*str != '\0')
	{
		str++;
		a++;
	}

	if (a % 2 == 0)
		b = a / 2;
	else
		b = (a - 1) / 2;

	for ( ; b < a; b++)
		_putchar(str[b]);
	_putchar('\n');
}

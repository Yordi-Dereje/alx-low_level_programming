#include "main.h"

/**
 * print_line - draw straight line
 * 
 * @n: variable for length
 * 
 * Return: nothing
 */
void print_line(int n)
{
	char i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
	                _putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}

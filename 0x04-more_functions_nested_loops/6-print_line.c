#include "main.h"

/**
 * print_line - Function to print a line of n length
 *
 * @n: Variable for length of line
 *
 * Return: nothing
 * */
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

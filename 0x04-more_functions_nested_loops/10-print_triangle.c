#include "main.h"
/**
 * print-triangle - print a traingle
 * Return: nothing
 */
void print_triangle(int size)
{
	int a;

	int b;

	int c;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = size - a; b > 1; b--)
				_putchar(' ');
			for (c = a + b; c >= 1; c--)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

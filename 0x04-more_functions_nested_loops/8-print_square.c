#include "main.h"
/**
 * print_square - print a square
 * Return: nothing
 */
void print_square(int size)
{
	char a;

	char b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= a; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

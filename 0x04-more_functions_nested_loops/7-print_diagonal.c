#include "main.h"
/**
 * print_diagonal - Function to print a diagonal line of n length
 *
 * @n: Variable for length of line
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	char a;
	char b;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= a; b++)
			{
				if (a != b)
					_putchar(' ');
				else
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	else
		_putchar('\n');
}


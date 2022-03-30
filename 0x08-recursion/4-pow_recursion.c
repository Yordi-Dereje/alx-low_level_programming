#include "main.h"
/**
 * _pow_recursion - a function that returns the value of y raised x
 *
 * @x: the exponent
 * @y: the power
 *
 * Return: if y < 0, 1 else the value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (_pow_recursion(x, (y - 1)) * x);
}

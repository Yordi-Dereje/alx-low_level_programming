#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number
 *
 * @n: the given number
 *
 * Return: if n < 0, -1 else the factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (factorial(n - 1) * n);
}

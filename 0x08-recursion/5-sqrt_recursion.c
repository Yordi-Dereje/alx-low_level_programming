#include "main.h"
/**
 * _sqrt_recursion - a function that returns the square root of a number
 *
 * @n: the passed value
 *
 * Return: if no sqrt, -1. Else the sqrt.
 */
int sqrt(int l, int h, int n)
{
	int m = (l + h) / 2;

	if ((m * m <= n) && ((m + 1) * (m + 1) > n))
		return (m);
	else if (mid * mid > n)
		return sqrt (m + 1, h, n);
	else
		return sqrt (l, m - 1, n);
}
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt (0, n, n));

}

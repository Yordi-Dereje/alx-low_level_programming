#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: one passed parameter
 * Return: the sum of the parameters or 0 if n == 0
 */
int sum_them_all(const unsigned int n,...)
{
	unsigned int i;
	unsigned int v;
	unsigned int sum = 0;

	if (n == 0)
		return (0);
	va_list args;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		v = va_arg(args, int);
		sum = sum + v;
	}
	va_end(args);
	return (sum);
		

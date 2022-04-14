#include <stdio.h>
#include <stdarg.h>
#include "variadic_function.h"
/**
 * print_numbers - a function that prints numbers
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int v;

	va_list args;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		v = va_arg(args, int);
		printf("%d\n%s\n", v, separator);
	}
	printf("\n");
	va_end(args);
}

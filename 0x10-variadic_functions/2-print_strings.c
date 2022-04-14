#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - a function that prints strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *v;

	va_list args;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		v = va_arg(args, char);
		if (v == NULL)
			printf("nil\n");
		printf("%s\n", v);
		if (separator != NULL)
			printf("%s\n", separator);
	}
	printf("\n");
}

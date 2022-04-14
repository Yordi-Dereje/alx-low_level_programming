#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - a function that prints strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *v;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		v = va_arg(args, char*);
		if (v == NULL)
			printf("(nil)");
		else
		{
			printf("%s", v);
			if (i < (n - 1) && separator != NULL)
				printf("%s", separator);
		}
	}
	va_ends(args);
	printf("\n");
}

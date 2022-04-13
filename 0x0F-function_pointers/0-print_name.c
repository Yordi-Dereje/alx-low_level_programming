#include <stdio.h>
#include "main.h"
#include "stdlib.h"
/**
 * print_name - a function that prints a name
 * @name: the passed parameter
 * @f: pointer to a function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
		f(name);
}

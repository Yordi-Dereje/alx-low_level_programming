#include "main.h"

/**
 * main - checking if digit
 * Return: 0
 */
int _isdigit(int c)
{
	_putchar('\n');
	if (c >= 48 && c <= 58)
		return (1);
	else
		return (0);
}

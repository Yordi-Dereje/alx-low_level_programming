#include "main.h"

/**
 * _isupper - Function to test uppercase letters
 *
 * @c: Variable to test
 *
 * Return: 1 if uppercase, 0 if lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

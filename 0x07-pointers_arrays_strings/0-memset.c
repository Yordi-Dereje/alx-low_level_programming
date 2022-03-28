#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 *
 * @s: the pointed area
 * @b: the constant byte
 * @n: the amount of bytes
 *
 * Return: a pointer to a memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	for (i=0; i<=n; i++)
	{
		s[i] = b;
	}
	return (s);
}

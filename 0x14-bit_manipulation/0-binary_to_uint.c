#include "main.h"
/**
 * binary_to_uint - a function that converts a binary to unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a; 
	int i;
	int count = 0;
	int x = 1;
	
	for (i = 0; b[i] != '\0'; i++)
	{
		count++;
	}
	for (i = count; i >= 0; i--)
	{
		if (b[i] != 0 || b[i] != 1)
			return (0);
		a += atoi(b[i]) * x;
		x *= 2;
	}
	return (a);
}
		

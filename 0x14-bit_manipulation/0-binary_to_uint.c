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
	unsigned int x = 1;
	
	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		count++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			a += x;
		x *= 2;
	}
	return (a);
}
		

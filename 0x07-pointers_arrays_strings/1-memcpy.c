#include "main.h"
/**
 * _memcpy - a function that copies n bytes from src to dest
 *
 * @dest: destination memory area
 * @src: source memory area
 * @n: amount of byte
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

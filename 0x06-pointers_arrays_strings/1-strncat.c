#include "main.h"
/**
 * _strncat - a function to append src until n on src
 * @dest: destination string
 *
 * @src: source string
 *
 * @n: byte used from src
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;

	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

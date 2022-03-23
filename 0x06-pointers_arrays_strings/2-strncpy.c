#include "main.h"
/**
 * _strncpy - a function to copy string src to dest
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * return: the pasted dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	
	return (dest);
}

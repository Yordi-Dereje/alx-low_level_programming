#include "main.h"
/**
 * _strcat - a function that appends src to dest
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: the appended string
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

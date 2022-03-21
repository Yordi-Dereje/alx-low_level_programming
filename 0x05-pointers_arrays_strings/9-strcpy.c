#include "main.h"
/**
 * _strcpy - a fuction to copy a string
 *
 * @dest: first pointer
 *
 * @src: second pointer
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;
	int b;

	for (a = 0; src[a] != '\0'; a++)
		b++;
	
	for (a = 0; a < b; a++)
		dest[a] = src[a];
	dest[b] = '\0';
	
	return (dest);
}

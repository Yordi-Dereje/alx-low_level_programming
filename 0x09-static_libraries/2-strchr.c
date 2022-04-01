#include "main.h"
/**
 * _strchr - a function to locate a character in a string
 *
 * @s: the string
 * @c: the character
 *
 * Return: the pointer to the first occurrence of the char
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}

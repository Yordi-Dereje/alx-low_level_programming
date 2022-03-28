#include "main.h"
/**
 * _strpbrk - locates the first occurrence in s from any byte of accept
 *
 * @s: the string where the searching happens
 * @accept: where the searching bytes reside
 *
 * Return: a pointer with redundant bytes from the above two
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}

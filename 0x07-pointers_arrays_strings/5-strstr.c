#include "main.h"
/**
 * _strstr - a function to find a substring
 *
 * @haystack: the main string
 * @needle: the looked for string
 *
 * Return: pointer beginning to the substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		k = i;
		while (haystack[k] == needle[j] && needle[j] != '\0')
		{
			j++;
			k++;
		}	
		if (needle[j] != '\0')
			return (haystack + i);
	}
	return (0);
}

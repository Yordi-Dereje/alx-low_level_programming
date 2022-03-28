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

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[j] != needle[j])
				break;
		}
	}
	if(haystack[i] != '\0')
		return (haystack + i);
	return (NULL);
}	

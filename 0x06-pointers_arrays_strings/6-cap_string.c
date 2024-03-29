#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string
 *
 * @str: the input string
 *
 * return: the capitalized string
 */
char *cap_string(char *str)
{
	int i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;

	for (i = 0; str[i] != '\0'; i++)
	{
		switch (str[i])
		{
			case ',': case ';': case '.': case '!': case '?':
			case '"': case '(': case ')': case '{': case '}':
			case ' ': case '\t': case '\n':
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] = str[i + 1] - 32;
		}
	}
	return (str);
}

#include "main.h"
/**
 * string_toupper - a function that changes all lowers to caps
 *
 * @str: the string
 *
 * Return: the string which is all now in cap
 */
char *string_toupper(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			str[a] = str[a] - 32;
	}

	return (str);
}

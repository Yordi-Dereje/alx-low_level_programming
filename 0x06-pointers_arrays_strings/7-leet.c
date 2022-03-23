#include "main.h"
/**
 * leet - a function that encodes a string to 1337
 *
 * @str: the input string
 *
 * return: the encoded string
 */
char *leet(char *str)
{
	int i, j;

	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == let[j])
			{
				str[i] = num[j];
			}
		}
	}
	return (str);
}

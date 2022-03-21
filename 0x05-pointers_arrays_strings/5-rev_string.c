#include "main.h"
/**
 * rev_string - a function that reverses a string
 *
 * @s: the passed string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int a = 0;
	int i;
	char temp;

	while (s[a] != 0)
	{
		a++;
	}

	for (i = 0; i < a / 2; i++)
	{
		temp = s[i];
		s[i] = s[a - i - 1];
		s[a - i - 1] = temp;
	}
}

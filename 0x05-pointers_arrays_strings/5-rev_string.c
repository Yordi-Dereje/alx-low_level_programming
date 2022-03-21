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
	char temp;
	
	while (*s != 0)
	{
		s++;
		a++;
	}
	
	int i;

	for (i = 0; i < a/2; i++)
	{
		temp = s[i];
		s[i] = s[a - i];
		s[a - i] = temp;
	}
}

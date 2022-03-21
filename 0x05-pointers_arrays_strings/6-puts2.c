#include "main.h"
/**
 * puts2 - prints every other character
 *
 * @str: passed string
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int a = 0;
	int i;
	
	while (str[a] != '\0')
	{
		a++;
	}

	for (i = 0; i < a; i++)
	{
		if (i % 2 == 0)
			_putchar(str[a]);
	}
	_putchar('\n');
}

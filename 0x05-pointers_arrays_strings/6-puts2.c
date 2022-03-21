#include<main.h>
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

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a = a + 2;
	}
	_putchar('\n');
}

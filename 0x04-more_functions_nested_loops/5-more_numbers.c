#include "main.h"
/**
 * more_numbers - 0 to 14
 * Return: nothing
 */

void more_numbers(void)
{
int i;

char a;

for (i = 0; i < 10; i++)
{
for (x = 0; x <= 14; x++)
{
if (x > 9)
_putchar((x / 10) + '0');
_putchar((x % 10) + '0');
}
_putchar('\n');
}
}

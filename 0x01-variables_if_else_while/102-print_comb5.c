#include<stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c = 0;

	for (a = 0; a <= 99; a++)
	{
		for (b = 0; b <= 99; b++)
		{
			if (a != b && a < b)
			{
				if (a < 10)
				{
					putchar((c % 10) + '0');
				}
				putchar((a % 100) + '0');
				putchar(' ');
				if (b < 10)
				{
					putchar((c % 10) + '0');
				}
				putchar((b % 100) + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}					

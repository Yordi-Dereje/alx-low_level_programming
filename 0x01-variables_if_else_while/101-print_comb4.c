#include<stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	int m;
	int n;
	int o;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			for (o = 0; o <= 9; o++)
			{
				if (m != n && n != o && m < n && n < o)
				{
					putchar((m % 10) + '0');
					putchar((n % 10) + '0');
					putchar((o % 10) + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

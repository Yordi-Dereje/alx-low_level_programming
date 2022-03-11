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

	for (m = 48; m <= 57; m++)
	{
		for (n = 48; n <= 57; n++)
		{
			for (o = 48; o <= 57; o++)
			{
				if (m < n && n < o)
				{
					putchar(m);
					putchar(n);
					putchar(o);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

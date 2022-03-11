#include<stdio.h>
/**
 *main - Entry point
 *Return: Always Success
*/
int main(void)
{
	int n;
	int m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			if (m != n && m < n)
			{
				putchar((m % 10) + '0');
				putchar((n % 10) + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

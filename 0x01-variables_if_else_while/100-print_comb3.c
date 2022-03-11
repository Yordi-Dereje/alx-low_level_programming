#include<stdio.h>
/**
 *main - Entry point
 *Return: Always Success
*/
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		for (m = 48; m <= 57; m++)
		{
			if (m != n && m < n)
			{
				putchar(m);
				putchar(n);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

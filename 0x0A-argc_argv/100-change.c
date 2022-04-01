#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change
 * @argc: the count
 * @argv: the passed argument
 * Return: 0 if successful, 1 if not
 */
int main(int argc, char *argv[])
{
	int a;
	int b = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);

	while (a > 0)
	{
		b++;
		if ((a - 25) >= 0)
		{
			a -= 25;
			continue;
		}
		if ((a - 10) >= 0)
                {
                        a -= 10;
                        continue;
                }
		if ((a - 5) >= 0)
                {
                        a -= 5;
                        continue;
                }
		if ((a - 2) >= 0)
                {
                        a -= 2;
                        continue;
                }
		a--;
	}
	printf("%d\n", b);
	return (0);
}

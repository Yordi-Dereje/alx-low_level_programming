#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: the count
 * @argv: the passed argument
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a = 0;
	int i;
	int j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		a += atoi(argv[i]);
	}
	printf("%d\n", a);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: the count
 * @argv: the passed argument
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	m = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n",m);
	return (0);
}

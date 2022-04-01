#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * isdigit - checks if the recieved values are numbers
 * @s: input string
 * Return: 0 if not digit, 1 if so
 */
int isdigit(char *s)
{
	int i = 0;
	int j = strlen(s);

	while (i < j)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		else
			i++;
	}
	return (1);
}
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

	for (i = 1; i < argc; i++)
	{
		if(isdigit(argv[i]))
			a = a + atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n",a);
	return (0);
}

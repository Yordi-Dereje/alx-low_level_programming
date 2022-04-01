#include <stdio.h>
/**
 * main - print the number of arguments passed into it
 * @argc: the count
 * @argv: the passed arg
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	argv++;
	printf("%d\n", argc - 1);
	return (0);
}

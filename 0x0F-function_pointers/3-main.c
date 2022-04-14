#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks the argument
 * @argc: the count
 * @argv: the passed argument
 * Return: Success
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - checks the argument
 * @argc: Count of arguments
 * @argv: Arguments stored in each index
 * Return: Success
 */
int main(int argc, char *argv[])
{
	int result;
	int num1;
	int num2;
	int (*func)(int, int);

	if (argc < 4 || argv[1] == NULL || argv[3] == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (func == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	result = func(num1, num2);

	printf("%d\n", result);

	return (0);
}

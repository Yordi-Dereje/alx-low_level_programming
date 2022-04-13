#include "3-calc.h"
/**
 * main - the function that checks the arguments
 * @argc: the count
 * @argv: the passed argument
 * Return: 0 if successful and an error if not.
 */
int main(int argc, int *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

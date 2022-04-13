#include "3-calc.h"
/**
 * main - the function that checks the arguments
 * @argc: the count
 * @argv: the passed argument
 * Return: 0 if successful and an error if not.
 */
int main(int argc, int *argv[])
{
	int a = 0;
	int b = 0;
	int r = 0;
	char c;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (argc[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	c = *argv[2];
	if (c != '+' && c != '-' && c != '*' && c != '/' && c != '%')
	{
		printf("Error\n");
		exit(99);
	}
	r = func(a, b);
	printf("%d\n", r);
	return (0);
}

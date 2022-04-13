#include "3-calc.h"
/**
 * op_add - a function to return the sum of 2 numbers
 * @a: first integer
 * @b: second integer
 * Return: the sum of the 2 numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - a function to return the subtraction of 2 numbers
 * @a: first integer
 * @b: second integer
 * Return: the subtraction of the 2 numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - a function to return the multiplication of 2 numbers
 * @a: first integer
 * @b: second integer
 * Return: the multiplication of the 2 numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - a function to return the quotient of 2 numbers
 * @a: first integer
 * @b: second integer
 * Return: the quotient of the 2 numbers or an error if the denominator is 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a / b);
}
/**
 * op_mod - a function to return the modulo of 2 numbers
 * @a: first integer
 * @b: second integer
 * Return: the modulo of the 2 numbers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a % b);
}

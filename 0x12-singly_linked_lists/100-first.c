#include <stdio.h>
/**
 * print - a function that prints a text before the main function is executed
 * Return: nothing
 */
void print(void) __attribute__((constructor));
void print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

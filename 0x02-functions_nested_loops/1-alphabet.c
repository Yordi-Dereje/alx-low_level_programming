#include<main.h>
/**
 * main - function to print lower case alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int a; 

	for (a=97; a<=122; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}

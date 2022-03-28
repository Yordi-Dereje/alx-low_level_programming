#include "main.h"
/**
 * print_chessboard - a function that prints a chessboard
 *
 * @a: the chess array
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			putchar(1, a[i][j], 1);
	putchar(1, '\n', 1);
	}
}

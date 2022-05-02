#include "main.h"
#include <stdio.h>
#include <stdlib>
/**
 * read_textfile - a function that reads a text file and prints it to the
 * POSIX standard output
 * @filename: the text file to be read and print
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a;
	ssize_t b;
	ssize_t c;
	char *x;

	if (filename == NULL)
		return (0);
	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	x = malloc(sizeof(char) * letters);
	if (x == NULL)
		return (0);
	b = read(a, x, letters);
	if (b == -1)
		return (0);
	c = write(STDOUT_FILENO, x, b);
	if (c == -1)
		return (0);
	free(x);
	close(a);
	return (c);
}

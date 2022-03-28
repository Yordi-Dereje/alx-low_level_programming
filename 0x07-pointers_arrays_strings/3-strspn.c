#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: the bigger string
 * @accept: the smaller string
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	for (i = 0; s

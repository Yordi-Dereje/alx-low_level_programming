#include <main.h>
/**
 * strlen - a function to return the length of a string
 *
 * @*s - the parameter for the string
 *
 * return: the length
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s != '\0'; s++)
		a++;
	
	return (a);
}

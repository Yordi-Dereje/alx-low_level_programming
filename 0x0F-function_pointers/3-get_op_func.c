#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - a function that select the correct operation
 * @s: the operator used
 * Return: correct one or NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (strcmp(ops[i].op,s) == 0 && s[i] == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}

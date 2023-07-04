#include "3-calc.h"

/**
 * get_op_func - entry point
 *
 * description: gets the right function to use
 * @s: operator
 *
 * Return: ptr function
 */

int (*get_op_func(char *s))(int, int)
{
	int index = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[index].op != NULL)
	{
		if (strcmp(s, ops[index].op) == 0)
		{
			return (ops[index].f);
		}
		index++;
	}
	return (0);
}

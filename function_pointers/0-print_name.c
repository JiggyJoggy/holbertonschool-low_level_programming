#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - entry point
 *
 * description: function that prints a name
 * @name: str char
 * @f: ptr function
 *
 * Return: name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

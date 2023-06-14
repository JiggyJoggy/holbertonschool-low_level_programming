#include "main.h"

/**
 * _puts_recursion - entry point
 *
 * description: function that prints a string, followed by a new line
 * @s: string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	int counter = 0;

	if (*s)
	{
		_puts_recursion(s--);
		counter++;
		_putchar(s[counter]);
	}
	else
	{
		_putchar('\n');
	}
}

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
	if (*s != '\0')
	{
		s = _puts_recursion(s--);
		_putchar(s + '0');
	}
	else
	{
		_putchar('\n');
	}
}

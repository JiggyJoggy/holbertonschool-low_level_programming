#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - entry point
 *
 * description: draws a diagonal line on the terminal
 * @n: takes an int of how long the line should be
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int index;

	index = 0;

	if (n > 0)
	{
		while (index < n)
		{
			_putchar(92); /* ASCII Slash */
			_putchar(' ');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}

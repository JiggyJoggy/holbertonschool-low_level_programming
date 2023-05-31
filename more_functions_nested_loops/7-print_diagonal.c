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
	int space;

	index = 0;
	space = 0;

	if (n > 0)
	{
		while (index <= n)
		{
			while (space < index)
			{
				_putchar(' ');
			}
			space++;
		}
		index++;
		_putchar(92); /* ASCII Slash */
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}

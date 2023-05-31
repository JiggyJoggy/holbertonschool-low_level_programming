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

	if (n > 0)
	{
		for (index = 0; index <= n; index++)
		{
			if (n == 1)
			{
				_putchar(92);
				_putchar(' ');
			}
			else
			{
				for (space = 1; space < index; space++)
				{
					_putchar(' ');
				}
			}
		_putchar(92); /* ASCII Slash */
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}

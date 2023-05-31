#include "main.h"
#include <stdio.h>

/**
 * print_line - entry point
 *
 * description: draws a straight line in the terminal
 * @n: int of lines
 *
 * Return: void
 */

void print_line(int n)
{
	int index;

	index = 0;

	if (n > 0)
	{
		while (index <= n)
		{
			_putchar(95); /* 95 is the underscore */
			index++;
		}
		_putchar('\n');
	else
	{
		_putchar('\n');
	}
}

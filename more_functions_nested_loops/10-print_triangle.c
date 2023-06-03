#include "main.h"
#include <stdio.h>

/**
 * print_triangle - entry point
 *
 * description: printing a triangle
 * @size: takes in a int
 *
 * Return: void
 */

void print_triangle(int size)
{
	int row, col, loop;

	if (size > 0)
	{
		for (loop = 0; loop < size; loop++)
		{
			for (row = size - 1; row > loop; row--)
			{
				_putchar(' ');
			}
			for (col = 0; col <= loop; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

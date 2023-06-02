#include "main.h"
#include <stdio.h>

/**
 * print_square - entry point
 *
 * description: printing a square, followed by a new line
 * @size: takes a int to form a square
 *
 * Return: void
 */

void print_square(int size)
{
	int index;
	int index1;

	for (index = 0; index < size; index++)
	{
		_putchar('#');

		for (index1 = 0; index < size; index1++)
		{
			_putchar('#');
		}
	}
}

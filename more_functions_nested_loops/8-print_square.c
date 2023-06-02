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
	for (index = 0; index < size; index++)
	{
		_putchar('#');

		for (index = 0; index < size; index++)
		{
			_putchar('#');
		}
	}
}

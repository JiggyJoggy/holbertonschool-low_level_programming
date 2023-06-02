#include "main.h"

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

	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size > 0)
	{
		for (index = 1; index <= size; index++)
		{

			for (index1 = 1; index1 <= size; index1++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

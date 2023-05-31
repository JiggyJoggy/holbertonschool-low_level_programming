#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - entry point
 *
 * description: print 0 to 9 without 2 and 4, followed by a new line
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int index;

	index = 0;

	while (index <= 9)
	{
		if (index == 2 || index == 4)
		{
			index++;
			continue;
		}
		_putchar(index + '0');
		index++;
	}
	_putchar('\n');
}

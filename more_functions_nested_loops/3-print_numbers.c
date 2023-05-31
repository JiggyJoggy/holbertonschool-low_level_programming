#include "main.h"
#include <stdio.h>

/**
 * print_numbers - entry point
 *
 * description: prints the numbers from 0 to 9, followed by a new line
 *
 * Return: void
 */

void print_numbers(void)
{
	int index;

	index = 0;

	while (index <= 9)
	{
		_putchar(index + '0');
		index++;
	}
	_putchar('\n');
}

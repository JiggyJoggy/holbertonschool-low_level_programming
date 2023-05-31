#include "main.h"
#include <stdio.h>

/**
 * more_numbers - entry point
 *
 * description: prints 10 times the numbers from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int loop;
	int index;

	loop = 0;
	index = 0;

	while (loop <= 10)
	{
		while (index <= 14)
		{
			_putchar(index + '0');
			index++;
		}
		loop++;
	}
	_putchar('\n');
}

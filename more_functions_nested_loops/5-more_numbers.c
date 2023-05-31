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
	int extra_digit;

	loop = 0;
	index = 0;
	extra_digit = 1;

	while (loop <= 10)
	{
		while (index <= 14)
		{
			if (index >= 10)
			{
				_putchar(extra_digit + '0');
				index = 0;
			}
			_putchar(index + '0');
			index++;
		}
		_putchar('\n');
		loop++;
	}
}

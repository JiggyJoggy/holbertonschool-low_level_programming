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

	for (loop = 1; loop <= 10; loop++)
	{
		for (index = 0; index <= 14; index++)
		{
			if (index > 9)
			{
				_putchar(index / 10 + '0');
			}
			_putchar(index % 10 + '0');
		}
		_putchar('\n');
	}
}

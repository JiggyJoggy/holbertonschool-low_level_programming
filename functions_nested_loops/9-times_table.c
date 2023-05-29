#include "main.h"
#include <stdio.h>

/**
 * times_table - entry point
 *
 * description: printing a times table from 0 to 9
 *
 * Return: void
 */

void times_table(void)
{
	for (int i = 1; i <= 9; i++)
	{
		_putchar(i);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
}